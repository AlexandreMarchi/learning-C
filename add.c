#include <stdio.h>

void add(int* a, int* b){

    *a = *a + *b;
    printf("Sum by pointers: %d ", *a);

}


int main(){

    int a = 8;
    int b = 10;

    int* p_a = &a;
    int* p_b = &b;


    add(p_a, p_b);

    return 0;
}