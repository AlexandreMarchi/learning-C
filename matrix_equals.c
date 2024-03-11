/*
Escreva uma função que verifica a igualdade entre duas matrizes. Ele deve retornar 1 (true) se as
matrizes forem iguais ou 0 (false), caso sejam diferentes

Write a function that checks de equality between two matrix. Must return true if equal ou false if not.
*/

#include <stdio.h>

int matrix_equals(int row1, int col1, int matrix1[row1][col1], int row2, int col2, int matrix2[row2][col2]){

    if(row1 != row2 || col1 != col2){
        return 0;
    }  else{

        for(int i=0; i < row1; i++){
            for(int j=0; j < col1; j++){

                if(matrix1[i][j] != matrix2[i][j]){

                    return 0;

                }
            }
        }
    }
    return 1;
}

int main(){

    int matrix1[3][3] = {
        1,2,3,
        4,5,6,
        7,8,9
    };

    int matrix2[3][3] = {
        1,2,3,
        4,5,6,
        7,8,9
    };

    int result = matrix_equals(3, 3, matrix1, 3, 3, matrix2);

    if (result == 1){
        printf("True");
    }else{
        printf("False");
    }

}