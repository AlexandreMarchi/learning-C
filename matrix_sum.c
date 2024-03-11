/*
Escreva uma função que realiza a adição de duas matrizes m1 e m2, colocando o resultado em m3. Todas as matrizes possuem as mesmas dimensões rows x cols.

Write a function that sums two matrix m1 and m2, adding the result in m3. All of them have the same dimensions rows x cols.
*/

void sum(int row, int col, int m1[row][col], int m2[row][col], int m3[row][col]){

    for(int i=0; i < row; i++){
        for(int j=0; j < col; j++){
            m3[i][j] = (m1[i][j] + m2[i][j]);
        }
    }

}


int main(){

    int m1[3][2] = {
        1,3,
        1,0,
        1,2
    };

    int m2[3][2] = {
        0,0,
        7,5,
        2,1
    };

    int m3[3][2];

    sum(3, 2, m1, m2, m3);

    return 0;
}