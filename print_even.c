#include <stdio.h>

void print_even(int n, int vet[]) {
    printf("Even values in the array: ");
    for (int i = 0; i < n; i++) {
        if (vet[i] % 2 == 0) {
            printf("%d ", vet[i]);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size must be positive.\n");
        return 1;
    }

    int vet[n];

    printf("Enter %d integers separated by spaces: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }

    print_even(n, vet);

    return 0;
}
