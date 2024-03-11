#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* copy_reverse(const char* str){

    size_t length = strlen(str);

    char* reversed = malloc((length+1) * sizeof(char));

    for(size_t i = 0; i < length; i++){
        reversed[i] = str[length - i - 1];
    }

    reversed[length] = '\0';
    return reversed;

}

int main(){

    const char* original = "Hello World!";
    char* reversed = copy_reverse(original);

    printf("Original: %s \n", original);
    printf("Reversed: %s \n", reversed);

    free(reversed);
    return 0;
}