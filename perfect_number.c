#include <stdio.h>

int is_perfect_number(int number) {
    int sum = 0;
    printf("Divisores de %d: ", number);

    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
            printf("%d + ", i);
        }
    }

    if (sum == number) {
        printf("%d = %d\n", number, sum);
        printf("Numero perfeito? Sim\n");
        return 1;
    } else {
        printf("%d != %d\n", number, sum);
        printf("Numero perfeito? Nao\n");
        return 0;
    }
}

int main() {
    int number;
    printf("Informe o numero: ");
    scanf("%d", &number);
    int result = is_perfect_number(number);
    return 0;
}
