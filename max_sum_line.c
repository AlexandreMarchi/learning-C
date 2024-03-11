/*
Escreva uma função que retorna o total da linha de maior soma em uma matriz

Write a function that returns the total sum of the highest sum value of a matrix
*/

#include <stdio.h>

int max_line(int row, int col, int matrix[row][col]){

    int max_sum = matrix[0][0];
    int current_sum = 0;

    for(int i=0; i < row; i++){
        for(int j=0; j < col; j++){
            current_sum += matrix[i][j];
        }
        if(current_sum >= max_sum){
            max_sum = current_sum;
        }
        current_sum = 0;
    }

    return max_sum;

}

int main(){

    int matrix[5][5] = {
        1,2,3,4,5,      //15
        5,6,7,8,2,      //28
        1,2,3,9,8,      //23
        9,8,4,5,6,      //32 <-
        8,7,6,5,4       //30
    };

    int sum = max_line(5, 5, matrix);

    printf("%d ", sum);
    return 0;

}