#include <stdio.h>

void print_factors(int a) {
    
    int factor = 2;
    int count = 0;

    while (a > 1) {
        if (a % factor == 0) {
            count++;
            a /= factor;
        } else {
            if (count > 0) {
                printf("%d x fator %d\n", count, factor);
            }
            count = 0;
            factor++;
        }
    }

    if (count > 0) {
        printf("%d x fator %d\n", count, factor);
    }
}

int main() {
    int number;

    printf("Informe o numero: ");
    scanf(" %d", &number);

    print_factors(number);
    return 0;
}