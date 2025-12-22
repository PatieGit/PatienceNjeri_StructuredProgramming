#include <stdio.h>
#include <stdlib.h>


void swapNumbers(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 3, b = 8;

    printf("Before swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    swapNumbers(&a, &b);

    printf("After swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

