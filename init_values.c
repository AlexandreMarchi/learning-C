/*
Escreva uma função que inicia uma matriz com valores inteiros, iniciando em start e progredindo com step.

Write a function that initiates a matrix with int values, starting in "start" and advancing with "step".
*/

#include <stdio.h>

void init_values(int row, int col, int matrix[row][col], int start, int step){
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            matrix[i][j] = start;
            start += step;
          
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

    int matrix[3][3];

    init_values(3, 3, matrix, 10, 2);
    print_matrix(3, 3, matrix);

    return 0;
}