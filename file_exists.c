#include <stdio.h>

int file_exists(const char* filepath){

    FILE* file;
    file = fopen(filepath, "r");

    if(file == NULL){
        return 0;
    }else{
        return 1;
    }
}

int main(){

    int res = file_exists("D:/Trabalhos UTFPR/Algoritmos/lista8/file.txt");

    switch(res)
    {
    case 1:
        printf("File exists!");
        break;
    
    case 0:
        printf("File doesn't exists");
        break;
    }

}