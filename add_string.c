/*
Escreva uma função que receba um caminho de arquivo e escreva linhas de strings no mesmo. Ela
deve (re)criar o arquivo especificado. A função recebe um vetor de strings e cada uma deve ser
escrita em uma linha do arquivo. Retorna 1 para sucesso ou 0, em caso de erro.

Write a function that receives a filepath and write strings in it. It must (re)create the file.
The function receives a string vector and each one must be written in one line of the file.
Returns 1 for success or 0 for error. 
*/
#include <stdio.h>

int add_string(const char* filepath, const char** text_lines) {
    FILE* file = fopen(filepath, "w");

    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 0;
    }

    size_t num_lines = sizeof(text_lines) / sizeof(text_lines[0]);

    for (size_t i = 0; i < num_lines; i++) {
        fprintf(file, "%s\n", text_lines[i]);
        }

    fprintf(file, "\n");
    fclose(file);

    return 1;
}

int main() {
    const char* lines[] = {"First", "Second", "Third", NULL};
    int result = add_string("file.txt", lines);

    switch(result){
        case 1:
            printf("Succesful!");
            break;
        case 0:
            printf("Error!");
            break;
    }
    return 0;
}
