#include <stdio.h>
#include <stdlib.h>

char* get_content(const char* filepath){

    char* string_content;

    FILE* file = fopen(filepath, "r");
    if(file == NULL){
        printf("ERROR");
        return NULL;
    }

    fseek(file, 0, SEEK_END);
    long file_size = ftell(file);
    fseek(file, 0, SEEK_SET);

    char* content = (char*)malloc(file_size+1);

    if(content == NULL){
        print("ERROR");
        return NULL;
    }

    size_t read_size = fread(content, 1, file_size, file);
    content[read_size] = '\0';

    fclose(file);
    return content;

}

int main(){

    get_content("file.txt");

    return 0;
}