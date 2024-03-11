/*
Escreva uma função que recebe uma matriz e coloca as somas de cada linha na última coluna.

Write a function that receives a matrix and insert the sums of eache line in the last column.
*/


#include <stdio.h>

void put_sums(int row, int col, int matrix[row][col]){
    int sum = 0; 
    
    for(int i=0; i < row; i++){
        for(int j=0; j < col-1; j++){
            sum += matrix[i][j];
        }
        matrix[i][col-1] = sum;
        sum = 0;
    }

    for(int i=0; i < row; i++){
        for (int j = 0; j < col; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
        
    }

}

int main(){

    int matrix[4][5] = {
        1, 2, 3, 4, 0,
        2, 4, 6, 8, 0,
        3, 6, 9, 12, 0,
        4, 8, 12, 16, 0
    };

    put_sums(4, 5, matrix);   

    return 0;
}