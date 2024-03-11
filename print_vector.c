#include <stdio.h>

void print_vector(int n, const  int* v){

    for (int i=0; i < n; i++){
        printf("%d ", *v);
        v++;
    }

}

int main(){

    int vector[] = {1,2,3,4,5};
    int length = 5;

    print_vector(length, vector);

    return 0;
}