/*
Escreva uma programa que lê (pelo terminal) dois números inteiros (a e b) e informa:
a. Adição
b. Subtração (a menos b)

Write a program that reads (trough terminal) two integers (a and b) and returns:
a. Sum
b. Subtraction
*/

#include <stdio.h>

void sum_sub(){
    int a, b;
    printf("Insert int a: ");
    scanf(" %d", &a);
    
    printf("Insert int b: ");
    scanf(" %d", &b); 

    int sum = a+b;
    int sub = a-b;

    printf("Sum: %d\n", sum);
    printf("Sub: %d\n", sub);
}

int main(){
    sum_sub();
    return 0;
}