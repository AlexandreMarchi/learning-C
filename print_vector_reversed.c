#include <stdio.h>

void print_vector_reversed(int n, const int* v){
    
    for(int i = n-1; i >= 0; i--){
        printf("%d ", *(v+i));

    }

}

int main(){

    int vector[] = {1,2,3,4,5};
    int length = 5;

    print_vector_reversed(length, vector);

    return 0;
}