#include <stdio.h>

void get_min_max(int n, const int* v, int* min, int* max){

    *min = *v;
    *max = *v;

    for(int i=0; i < n; i++){
        *v++;
        if(*v > *max){
            *max = *v;
        }
        if(*v < *min){
            *min = *v;
        }
    }

}

int main(){

    int vector[] = {1,2,3,4,5};
    int length = 5;
    int min, max;

    get_min_max(length, vector, &min, &max);

    printf("Max: %d \n", max);
    printf("Min: %d \n", min);
    return 0;
}