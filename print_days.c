/*
Escreva uma função que recebe um número de dias e informa a quantidade correspondente em:
anos + semanas + dias.
a. Considere:
i. Ano = 365 dias
ii. Semana = 7 dias

Write a function that recieves a number of days and returns: years + weeks + days.
Example: Days: 427 = 1 year, 8 weeks and 6 days
*/

#include <stdio.h>

void print_days(){
    int days,year,week,daysfinal;
    printf("Days: ");
    scanf(" %d", &days);

    year = days / 365;
    week = (days % 365) / 7;
    daysfinal = (days % 365) % 7;

    printf("Days: %d = %d year(s), %d week(s) and %d day(s).", days, year, week, daysfinal);


}

int main(){

    print_days();
    return 0;
}