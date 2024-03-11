#include <stdio.h>

int main(){
    int a = 2;
    char b = 'b';
    double pi = 3.14159265359;

    int* p_a = &a;
    char* p_b = &b;
    double* p_c = &pi;

    printf("Index of a: %p \n", *p_a);
    printf("Index of b: %p \n", *p_b);
    printf("Index of c: %p \n", *p_c);

    return 0;
}