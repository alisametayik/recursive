#include <stdio.h>
void fonka();
int b;
int main() {
    int number, result;
    b = 100;
    fonka();

    //printf("sum = %d", result);
    return 0;
}

void fonka() {

    printf("fonksiyona girdi  b = %d\n", b);
    b--;
    if (b > 10)
        fonka();

    printf("cikti %d\n", b);
}