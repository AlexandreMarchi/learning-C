/*Escreva um programa que lê dois números inteiros (a e b) e informa:
a. Resto (utilizado o operador %)
b. Resto (sem utilizar o operador %)

Write a program that reads two integers (a and b) and returns:
a. Division remainder utilizing %
b. Division remainder without %
*/

#include <stdio.h>

void division_remainder(){
    int a,b;
    printf("Insert the a: ");
    scanf(" %d", &a);

    printf("Insert the b: ");
    scanf(" %d", &b);

    printf("With %: %d\n", a%b);
    printf("Without %: %d", a - ((a/b) * b));
}

int main(){
    division_remainder();
    return 0;
}