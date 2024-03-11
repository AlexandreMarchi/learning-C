/*
Escreva uma função que monta a transposta da matriz m1 em m2.

Write a function that transpose the matrix m1 to m2.

Example:

   m1       m2
[1 2 3]   [1 0]
[0 6 7]   [2 6]
          [3 7]
*/

#include <stdio.h>
void transpose(int row1, int col1, int m1[row1][col1], int row2, int col2, int m2[row2][col2]){

    for(int i=0; i < row1; i++){
        for(int j=0; j < col1; j++){
           m2[j][i] = m1[i][j];
        }
    }

}


int main(){

    int m1[2][3] = {
        1,2,3,
        0,-6,7
    };

    int m2[3][2];

    transpose(2, 3, m1, 3, 2, m2); 

    return 0;
}