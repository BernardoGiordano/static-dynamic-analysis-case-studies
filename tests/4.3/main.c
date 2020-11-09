#include <stdio.h>
#include <stdlib.h>

void foo() {
    static char* buf = 0;
    if ((buf = realloc(buf, 100)) == NULL)
        return;
    free(buf);
}

int main() {
    foo();
    return 0;
}