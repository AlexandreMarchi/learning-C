#include <stdio.h>

int save_string(const char* filepath, const char* text){

    FILE* file = fopen(filepath, "w+");

    if(file == NULL){
        printf("ERROR");
        return 0;
    }

    for(int i=0; text[i] != '\0'; i++){
        fputc(text[i], file);
    }
    
    fclose(file);
    return 1;
}

int main(){

    int result = save_string("file.txt", "Hello world");
    switch (result)
    {
    case 1:
        printf("Successful");
        break;
    
    case 0:
        printf("Failed");
        break;
    }
    return 0;
}