#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concat_string(const char* str1, const char* str2){

    size_t length = strlen(str1) + strlen(str2);

    char* str3 = malloc((length+1) * sizeof(char));

    strcpy(str3, str1);
    strcat(str3, str2);
    
    
    return str3;

}

int main(){

    const char* str1 = "Hello!";
    const char* str2 = "How are you?";

    char* str3 = concat_string(str1, str2);

    printf("%s", str3);


}

