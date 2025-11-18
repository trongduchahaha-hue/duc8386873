#include <stdio.h>

void sum(int *x, int *y, int *result) {
    *result = *x + *y;
}

int main() {
    int a = 7;
    int b = 13;
    int ketQua = 0;

    printf("Gia tri ban dau:\n");
    printf("a = %d, b = %d\n", a, b);

    sum(&a, &b, &ketQua);

    printf("\nKet qua tinh tong (a + b): %d\n", ketQua);

    return 0;
}

