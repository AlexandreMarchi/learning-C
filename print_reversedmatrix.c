/*
Escreva uma função que imprime o conteúdo de uma matriz ao contrário

Write a function that prints the content of a matrix in reverse
*/

#include <stdio.h>

void print_reversed(int row, int col, int matrix[row][col]){


    for (int i = row-1;i >= 0; i--){
        for (int j = col-1;j >= 0; j--){
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

    print_reversed(3,3,matrix);
    return 0;
}