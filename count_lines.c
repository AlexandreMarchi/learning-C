#include <stdio.h>

int count_lines(const char* filepath){
    int lines = 0;

    FILE* file = fopen(filepath, "r");

    if(file == NULL){
        printf("ERROR: file doesn't exists");
        return 1;
    }

    char ch;
    while((ch = fgetc(file)) != EOF){
        if(ch == '\n'){
            lines++;
        }
    }

    if(ch != '\n' && lines > 0){
        lines++;
    }

    fclose(file);
    return lines;

}

int main(){

    int result = count_lines("file.txt");
    if(result >= 0){
    printf("%d line(s) on file", result);
    }
    return 0;
}