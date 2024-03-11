/*
Escreva uma função que recebe um inteiro representando um ano e retorna se o mesmo é
bissexto. A função deve retornar 1 (true) para bissexto ou 0 (false), em caso contrário. Para um ano
ser bissexto (leap year), ele precisa:
a. Ser divisível por 4 e não divisível por 100, OU, ser divisível por 400.

Write a function that reads an integer which represents an year e returns if it is leap year.
*/

#include <stdio.h>

int leap_year(int year){

    printf("Insert an year: ");
    scanf(" %d", &year);

    if (year % 4 == 0 && year % 100 != 0) {
        printf("It is a leap year!");
        return 1;
}

    else{
        printf("It is NOT a leap year");
        return 0;
    }
}
int main(){
    leap_year(1);

}
