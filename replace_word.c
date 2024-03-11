#include <stdio.h>
#include <string.h>

int replace_word(const char* filepath, const char* old_str, const char* new_str){

    FILE* file = fopen(filepath, "r+");

    if(file == NULL){
        return 0;
    }

    char buffer[100];
    while(fscanf(file, "%99s", buffer) == 1){
        if(strcmp(old_str, buffer) == 0){
            fputs(new_str, file);
        }
    }

    fclose(file);


}

int main(){

    const char* filepath = "file.txt";
    
    int result = replace_word(filepath, "like", "CHANGED");

    printf("The word was replaced %d times", result);

    return 0;

}