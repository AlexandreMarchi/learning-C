#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* copy_string(const char* str){

    size_t lenght = strlen(str);
    char* copy = malloc((lenght + 1) * sizeof(char));

    strcpy(copy, str);
    return copy;

}

int main(){


    const char* og = "Hello World";
    char* copied = copy_string(og);

    printf("Og : %s\n", og);
    printf("Cpy: %s\n", copied);

    free(copied);
    return 0;
}