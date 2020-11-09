#include <stdlib.h>

class Foo {
private:
    char* str1;
    char* str2;
    char* str3;
public:
    Foo();
    ~Foo();
};

Foo::Foo() {
    str1 = new char[10];
    str2 = new char[10];
    str3 = new char[10];
}

Foo::~Foo() {
    free(str1);
    delete[] str2;
}

int main() {
    Foo* bar = new Foo();
    delete bar;
    return 0;
}