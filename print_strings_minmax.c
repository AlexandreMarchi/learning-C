/*
Escreva uma função que imprime as palavras de maior e menor tamanhos em um array de n strings.

Write a function that prints the words with max and minimum characters in an array of n strings
*/

#include <stdio.h>
#include <string.h>


void print_strings_minmax(int n, int length, char list[n][length]){

    char min[length];
    char max[length];

    strcpy(min, list[0]);
    strcpy(max, list[0]);

    for(int i=0; i < n; i++){
        if(strlen(list[i]) < strlen(min)){
            strcpy(min, list[i]);
        } else if (strlen(list[i]) > strlen(max)){
            strcpy(max, list[i]);
        }
    }

    printf("Min: %s\n", min);
    printf("Max: %s", max);

}

int main(){

    char list[6][20] = {"alexander", "murillo", "salah", "robertson", "arnold", "darwin"};

    print_strings_minmax(6, 20, list);
}