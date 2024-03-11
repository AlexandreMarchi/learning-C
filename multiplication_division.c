/*
Escreva um programa que lê dois números inteiros (a e b) e informa:
a. Multiplicação
b. Divisão inteira (a dividido por b)
c. Divisão float (a dividido por b)

Write a program that reads two integers (a and b) and returns:
a. Multiplication
b. Int division (a divided by b)
c. Float division (same)
*/
#include <stdio.h>

void multiplication_division(){
    int a, b;
    
    printf("Insert int a: ");
    scanf(" %d", &a);
    
    printf("Insert int b: ");
    scanf(" %d", &b); 

    int mult = a*b;
    int intdiv = a/b;
    float floatdiv = (float)a/b;

    printf("Multiplication: %d\n", mult);
    printf("Int division: %d\n", intdiv);
    printf("Float division: %.2f\n", floatdiv);
}

int main(){
    multiplication_division();
    return 0;
}