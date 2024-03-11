/*
Escreva uma função que retorna a média aritmética simples de todos os elementos da matriz.

write a function that returns the average of all elements in the matrix
*/

#include <stdio.h>

float average(int row, int col, int matrix[row][col]){

    int countElements = 0;
    int sum = 0;
    float result = 0;

    for (int i=0; i < row; i++){
        for (int j=0; j < col; j++){
            countElements += 1;
            sum += matrix[i][j];
        }
    }
    
    result = (float)sum/countElements;
    return result;
}

int main(){
    int matrix[3][4] = {
        1,2,3,4,
        5,6,7,8,
        9,10,11,12
    };

    float avg = average(3,4,matrix);
    printf("Average: %f ", avg);
    return 0;
}