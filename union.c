#include <stdio.h>
#include <stdlib.h>

int* union_vector(int n1, const int* v1, int n2, const int* v2) {
    size_t length = n1 + n2;
    int* v3 = malloc(length * sizeof(int));

    for (int i = 0; i < n1; i++) {
        v3[i] = v1[i];
    }

    for (int i = 0; i < n2; i++) {
        v3[n1 + i] = v2[i];
    }

    return v3;
}

void print_vector(int n, const int* v) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int v1[] = {1, 2, 3, 4, 5};
    int v2[] = {6, 7, 8, 9, 10};

    int* v3 = union_vector(5, v1, 5, v2);
    print_vector(10, v3);

    free(v3);
    return 0;
}
