#include <stdlib.h>
#include <stdio.h>

int main() {
    int* buffer1 = malloc(100 * sizeof(int));
    int* buffer2 = malloc(100 * sizeof(int));

    int a = buffer1[0];
    int b = buffer1[102];

    free(buffer1);

    int c = buffer1[0];
    printf("%d\n", c);

    return 0;
}