int main() {
    char* c = (char*)"ASSSC";
    char* d = 0;
    /* ... codice ... */
    delete c;
    delete d;
    c[0] = 0;
    d[0] = 0;
    return 0;
}