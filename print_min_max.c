/*
Escreva uma função que encontra e imprime o maior e o menor valores contidos em uma matriz.

Write a function that finds and prints the max and de min values in the matrix
*/
#include <stdio.h>

void min_max(int row, int col, int matrix[row][col]){
    int max = matrix[0][0];
    int min = matrix[0][0];

    for (int i=0; i < row; i++){
        for (int j=0; j < col; j++){

            if (matrix[i][j] > max){
                max = matrix[i][j];

            }
            if (matrix[i][j] < min){
                    min = matrix[i][j];
                    }
                }
            }
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    }


int main(){

    int matrix[3][3] = {
        5,3,2,
        6,7,4,
        9,8,1
    };

    min_max(3,3,matrix);

    return 0;
}