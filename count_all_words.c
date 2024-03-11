/*
Escreva uma função que imprime a quantidade de ocorrências de cada palavra, em um arquivo.

Write a function that prints the quantity of occurrences of each word, in a file.
*/

#include <stdio.h>
#include <string.h>

void count_all_words(const char* filepath){

    FILE* file = fopen(filepath, "r");

    if(file == NULL){
        printf("ERROR");
        return;
    }

    char word[100][100];
    int wordCount[100];
    int numWord = 0;

    while(fscanf(file, "%s", word[numWord]) == 1){

        int found = 0;

        for(int i=0; i < numWord; i++){
            if(strcmp(word[numWord], word[i]) == 0){
                wordCount[i] ++;
                found = 1;
                break;
            }
        }

        if(found == 0){
            wordCount[numWord] = 1;
            numWord++;
        }
    }

    for(int i=0; i < numWord; i++){
        printf("Word: %s, Occurrences: %d\n", word[i], wordCount[i]);
    }

    fclose(file);
}

int main(){

    count_all_words("file.txt");

    return 0;
}