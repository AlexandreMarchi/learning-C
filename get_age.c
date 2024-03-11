/*
Escreva um programa que calcula a idade de uma pessoa a partir da data de nascimento, lida pelo
terminal em três variáveis (dia, mês e ano). Para obter a data atual, utilize as funções get_day(),
get_month() e get_year(), fornecidas pelo código em anexo.

Write a program that gets the age of a person through its birthdate, scanned by the terminal in three
variables (day, month and year).
*/

#include <time.h>
#include <stdio.h>

struct tm get_date() {

    time_t t = time(NULL);
    return *localtime(&t);

}

int get_day() {
    return get_date().tm_mday;
}

int get_month() {
    return get_date().tm_mon+1;
}

int get_year() {
    return get_date().tm_year+1900;
}

int main(){
    int day_birt, month_birt, year_birt;

    printf("Type the birthdate, format (day month year)\n");
    scanf("%d %d %d", &day_birt, &month_birt, &year_birt);

    int day_current = get_day();
    int month_current = get_month();
    int year_current = get_year();

    if (day_birt > 31){
        printf("The date is unvalid!");
        return 0;
    }

    if (month_birt == 2 && day_birt > 29){
        printf("The date is unvalid!");
        return 0;
    }

    if (month_birt == 4 || month_birt == 6 || month_birt == 9 || month_birt == 11 && day_birt > 30){
        printf("The date is unvalid!");
        return 0;
    }

    int age = year_current - year_birt;

    if (month_current < month_birt || (month_current == month_birt && day_current < day_birt)){
        age--;
    }

    printf("Age: %d years old", age);

    return 0;
}