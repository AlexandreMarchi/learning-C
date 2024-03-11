/*
Escreva uma função que receba um vetor de inteiros e seu tamanho n. A função deve retornar o
endereço de um novo vetor, alocado na heap, contendo os max maiores elementos contidos no
vetor original

Write a function that receives a vector of integers and its length n. The function must return
the adress of a new vector, allocated in heap, containing the highest values contained in
the original vector
*/

#include <stdio.h>
#include <stdlib.h>

int* get_largest(int length, int* v0, int qtd){

    int* v1 = malloc(qtd * sizeof(int));

    for(int i=0; i < length-1; i++){
        for(int j=i+1; j < length; j++){

            if(v0[i] < v0[j]){

                int temp = v0[i];

                v0[i] = v0[j];

                v0[j] = temp;
            }
        }
    }

    for(int i=0; i < qtd; i++){
        v1[i] = v0[i]; 
    }

    return v1;
}

void print_vector(int qtd, int* v1){

    int* p = v1;

    for(int i=0; i < qtd; i++){
        printf("%d ", *p);
        p++;
    }

}

int main(){

    int v0[] = {6,10,2,1,2,3,9};

    int* v1 = get_largest(7, v0, 2);
    print_vector(2, v1);

    free(v1);

}