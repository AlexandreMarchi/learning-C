/*
Escreva uma função que recebe um float e informa, separadamente:
a. O número com 2 casas de precisão;
b. A parte inteira e a parte decimal;
c. Sua representação em notação científica (mantissa/expoente)

Write a function thtat reads a float and returns:
a. The number with two digit precision
b. Int part and float part
c. Scientific notation
*/

#include <stdio.h>

void print_float(){
    float number;
    printf("Insert a float: ");
    scanf(" %f", &number);

    printf("Two digit preciosion: %.2f\n", number);

    printf("Int part: %d\n", (int)number);

    printf("Float part: %f\n", (number - (int)number));

    printf("Scientific notation: %e", number);


}

int main(){
    print_float();
    return 0;
}