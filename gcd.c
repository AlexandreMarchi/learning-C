#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    printf("Enter two positive integers A and B: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Numbers must be positive.\n");
    } else {
        int result = gcd(a, b);
        printf("The GCD of %d and %d is %d.\n", a, b, result);
    }

    return 0;
}