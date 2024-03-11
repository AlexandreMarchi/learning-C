/*
Escreva um programa que lê um caractere da entrada. Se não for letra, informa. Se for letra,
verifica se é maiúscula (e passa para maiúscula se necessário). Ao final, deve informar a letra
digitada em maiúsculo.

Write a program that reads a character. If it isn't a letter, returns. If its a letter, verify
if its upper case (and turn it upper case if necessary). It must return the typed letter in upper
case.
*/

#include <stdio.h>

void character(){

    char c;

    printf("Insert a char: ");
    scanf(" %c", &c);

    if (c < 65 || c > 122){
        printf("It is not a letter");
    }

    if (c >= 97){
        c -= 32;
    }

    printf("The uppercase char: %c ", c);

}



int main(){
    character();
    return 0;
}