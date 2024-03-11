/*
Escreva uma função que imprime o conteúdo de uma matriz.

Write a function that prints the contente of a matrix
*/

#include <stdio.h>

void print_matrix(int row, int col, int matrix[row][col]){
    for (int i=0; i < row; i++){
        for (int j=0; j < col; j++){
            printf("%d ", matrix[i][j]);
        }
    }

}

int main(){

    int matrix[3][3] = {
        1,2,3,
        4,5,6,
        7,8,9
    };

    print_matrix(3, 3, matrix);
    return 0;
}