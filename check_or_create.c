#include <stdio.h>

int check_or_create(const char* filepath){

    FILE* file;
    file = fopen(filepath, "r");

    if(file == NULL){
        file = fopen(filepath, "a+");
        return 1;
    }else{
        return 0;
    }

}

int main(){

    int res = check_or_create("D:/Trabalhos UTFPR/Algoritmos/lista8/fil.txt");

    switch(res)
    {
    case 1:
        printf("Created file successfully");
        break;
    case 0:
        printf("The file already exists");
    }

}