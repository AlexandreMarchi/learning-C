/*
Escreva uma função que recebe três números e os imprime em ordem crescente.

Write a function that reads three numbers and print them ascending
*/

#include <stdio.h>

void print_sorted(int a, int b, int c){

    int max,mid,min;

    if (a >= b && a >=c){
        max = a;
        if (b >= c){
            mid = b;
            min = c;
        }
        else{
            min = b;
            mid = c;
        }
    }

    if (b >= a && b >=c){
        max = b;
        if (a >= c){
            mid = a;
            min = c;
        }
        else{
            mid = c;
            min = a;
        }
    }

    if (c >= a && c >=b){
        max = c;
        if (b >= a){
            mid = b;
            min = a;
        }
        else{
            mid = a;
            min = b;
        }
    }

    printf("%d - %d - %d", min,mid,max);


}

int main(){
    int a,b,c;
    printf("Enter a: ");
    scanf(" %d", &a);

    printf("Enter b: ");
    scanf(" %d", &b);

    printf("Enter c: ");
    scanf(" %d", &c);

    print_sorted(a,b,c);

    return 0;
}