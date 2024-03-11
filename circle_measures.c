/*
Escreva um programa que lê o raio (r) de um círculo. O programa deve informar: o diâmetro (2r), a
circunferência (2πr) e a área do círculo (πr^2). Crie uma macro: #define PI 3.141593

Write a program that reads the radius(r) of a circle. The program must return: diameter, circumference and the area. Create a macro: #define PI 3.141593.

*/

#include <stdio.h>
#define PI 3.141593

void circle_measures(){
    int r;
    printf("Insert the radius: ");
    scanf(" %d", &r);

    float diameter = 2*r;
    float circumference = 2*PI*r;
    float area = PI*r*r;

    printf("\nDiameter: %f\n", diameter);
    printf("Circumference: %f\n", circumference);
    printf("Area: %f", area);

}

int main(){
    circle_measures();
    return 0;
}