/*
Escreva uma função que aloca na heap um array de inteiros de tamanho n, preenchido com zeros,
e retorna seu endereço.

Write a function that allocates in heap an array of integers with size n, filled with zeros,
and returns its adress.
*/

#include <stdio.h>
#include <stdlib.h>

int* create_vector(int n){

    int* v = malloc(n * sizeof(int));

    for(int i=0; i < n; i++){
        v[i] = 0;
    }

    return v;

}

void print_vector(int n, int* v){

    int *p = v;

    for(int i=0; i < n; i++){
        printf("%d ", *p);
    }

}

int main(){

    int* v = create_vector(7);
    print_vector(7, v);

    free(v);

    return 0;
}