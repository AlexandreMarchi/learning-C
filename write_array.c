#include <stdio.h>
#include <stdlib.h>

void write_array(const char* filepath, int size, const int* v){

    FILE* file = fopen(filepath, "wb+");

    if(file == NULL){
        printf("ERROR\n");
    }

    fwrite(v, sizeof(int), size, file);
    
    fclose(file);

}

int main(){

    int vector[] = {1,2,3,4,5,6,7,8};
    write_array("file.bin", 8, vector);

    return 0;
}