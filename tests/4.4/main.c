#include <stdio.h>

int main(int argc, char** argv) {
    char buffer[10];
    if (argc == 2) {
        sprintf(buffer, "%s", argv[1]);
    }
    printf("%s\n", buffer);
    return 0;
}