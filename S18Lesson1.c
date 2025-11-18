#include <stdio.h>

int main() {
    int a = 10;
    int *ptr = &a;

    printf("Gia tri cua a (su dung bien): %d\n", a);
    printf("Dia chi cua a (su dung &a): %p\n", (void*)&a);

    printf("Gia tri cua a (su dung con tro *ptr): %d\n", *ptr);
    printf("Dia chi cua a (su dung con tro ptr): %p\n", (void*)ptr);

    return 0;
}

