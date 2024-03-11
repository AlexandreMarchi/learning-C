#include <stdio.h>

int append_string(const char* filepath, const char* text){

    FILE* file = fopen(filepath, "a");

    if(file == NULL){
        printf("ERROR");
        return 0;
    }


    for (int i=0; text[i] != '\0'; i++){
        fputc(text[i], file);
    }
    
    fclose(file);
    return 1;
}

int main(){

    int result = append_string("file.txt", "alexander");

    switch (result)
    {
    case 1:
        printf("Successful");
        break;
    case 0:
        printf("Failed");
    }

    return 0;
}