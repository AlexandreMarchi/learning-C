#include <stdio.h>
#include <string.h>

int count_word(const char* filepath, const char* word){

    int count = 0;

    FILE* file = fopen(filepath, "r+");

    if(file == NULL){
        return 0;
    }

    char buffer[100];

    while(fscanf(file, "%99s", buffer) == 1){
        if(strcmp(buffer, word) == 0){
            count++;
        }
    }

    fclose(file);
    return count;
}

int main(){
    char* word = "hello";
    int count = count_word("file.txt", word);

    printf("The word %s appears %d times in the file", word, count);

    return 0;
}