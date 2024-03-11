/*
Escreva uma função que troca as diagonais de uma matriz. Considere que a matriz é quadrada.

Write a function that switches the diagonals from a matrix. Consider it a square.
*/

#include <stdio.h>

void switch_diagonals(int d,int matrix[d][d]){

    for(int i=0; i<d; i++){
        int temp = matrix[i][i];
        matrix[i][i] = matrix[i][d - 1 - i];
        matrix[i][d - 1 - i] = temp;
    }
    
}

int main(){

    int matrix[3][3] = {
        1,2,3,
        4,5,6,
        7,8,9
    };

    switch_diagonals(3, matrix);

    return 0;
}