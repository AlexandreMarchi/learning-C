/*
Escreva uma função que recebe três notas escolares n1, n2 e n3 (0..10). A função deve calcular e
imprimir a média aritmética simples das três notas, bem como, o conceito que o aluno obteve pela
média, segundo estes critérios:
a. Conceito A, se média no intervalo [8,5..10]
b. Conceito B, se média no intervalo [7,0..8,5[
c. Conceito C, se média no intervalo [5,5..7,0[
d. Conceito F, se média inferior a 5,5

Write a function that reads three scool grades n1,n2 and n3 (0-10). The function must calculate
and print the arithmetic average of the three grades, it must print the concept that the student
gets through his average:
a. A = 8.5+
b. B = 7.0 - 8.5
c. C = 5.5 - 7.0
d. F = 5.5-
*/

#include <stdio.h>

void print_grade(float n1, float n2, float n3){


    float average;

    average = (n1 + n2 + n3) / 3;

    printf("Arithmetic average: %.2f\n", average);

    if (average > 8.5){
        printf("Concept A");
    }
    if (average <= 8.5 && average > 7){
        printf("Concept B");
    }
    if (average <= 7 && average > 5.5){
        printf("Concept C");
    }
    if (average <= 5.5){
        printf("Concept F");
    }

}

int main(){
    float n1,n2,n3;

    printf("Insert n1: ");
    scanf(" %f", &n1);

    printf("Insert n2: ");
    scanf(" %f", &n2);

    printf("Insert n3: ");
    scanf(" %f", &n3);

    print_grade(n1,n2,n3);

    return 0;
}