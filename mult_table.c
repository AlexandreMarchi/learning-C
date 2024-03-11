/*
Escreva uma função que imprime a tabuada de um número informado. Dica: lembre-se que você
pode alinhar os valor na saída com %2d (dois dígitos, alinhados à direita)

Write a function that prints the multiplication table of a given number.
*/

#include <stdio.h>

void print_mult_table(){
    int number;
    printf("Insert the number: ");
    scanf(" %d", &number);

    printf("%d x 1 = %d", number, number*1);

    printf("%6d x 6 = %d\n", number, number*6);

    printf("%d x 2 = %d", number, number*2);

    printf("%5d x 7 = %d\n", number, number*7);

    printf("%d x 3 = %d", number, number*3);

    printf("%5d x 8 = %d\n", number, number*8);

    printf("%d x 4 = %d", number, number*4);

    printf("%5d x 9 = %d\n", number, number*9);

    printf("%d x 5 = %d", number, number*5);

    printf("%5d x 10 = %d", number, number*10);

}

int main(){
    print_mult_table();
    return 0;
}