#include <stdio.h>

int print_content(const char* filepath){

    FILE* file = fopen(filepath, "r");

    if(file == NULL){
        printf("ERROR: file doesn't exists");
        return 0;
    }

    char ch;
    while((ch = fgetc(file)) != EOF){
        printf("%c", ch);
    }
    return 1;

    fclose(file);

}

int main(){

    print_content("file.txt");

    return 0;
}