/*
Escreva uma função que inicia uma matriz com valores aleatórios, sorteados entre min e max

Write a function that initiates a matrix with random values, between min and max.
*/

#include <stdio.h>
#include <stdlib.h>

void init_rand(int row, int col, int matrix[row][col], int min, int max){
    
    for(int i=0;i < row; i++){
        for(int j=0; j < col; j++){
            matrix[i][j] = rand() % (max-min + 1) + min;
        }
    }


}

void print_matrix(int row, int col, int matrix[row][col]){
    for (int i=0; i < row; i++){
        for (int j=0; j < col; j++){
            printf("%d ", matrix[i][j]);
        }
    }

}

int main(){

    int matrix[4][6];

    init_rand(4, 6, matrix, 5, 50);
    print_matrix(4, 6, matrix);

    return 0;
}