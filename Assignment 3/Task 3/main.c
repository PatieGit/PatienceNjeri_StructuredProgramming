#include <stdio.h>
#include <stdlib.h>


int main() {
    int count = 9;
    int *pCount;

    pCount = &count;

    *pCount = 27;

    printf("Updated value of count: %d\n", count);

    return 0;
}
