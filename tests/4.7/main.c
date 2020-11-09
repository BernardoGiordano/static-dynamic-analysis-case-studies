#include <stdio.h>

int main() {
    FILE* file = fopen("main.c", "r");
    if (!file) {
        /* error handling */
        return 0;
    }
    return 0;
}