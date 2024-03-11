/*
Escreva uma função que imprime um array de n strings

Write a function that prints the array of n strings.
*/

#include <stdio.h>

void print_strings(int n, int length, char list[n][length]){

    for(int i=0; i < n; i++){
        for(int j=0; j < length-1; j++){
    
            printf("%c", list[i][j]);
            
        }
        printf(" \n");
    }

}

int main(){

    char list[6][20] = {"john", "mary", "jane", "robert", "paul", "james"};
    print_strings(6, 20, list);

    return 0;
}