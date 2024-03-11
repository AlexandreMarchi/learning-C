#include <stdio.h>

int reverse_int(int number){
    while (number > 0){
        printf("%d", number % 10);
        number = number / 10;
    }
    return 0;
}

int main(){
    int number;
    printf("Insert an int: ");
    scanf(" %d", &number);
    reverse_int(number);
    
    return 0;
}