#include "fct.h"
#include <stdio.h>

int main() {

    int a = 2;
    printf("%p\n", &a);
    int * p = &a;
    printf("%p\n", p);
    printf("%p\n", &p);
    *p = 5;
    printf("%d\n", a);

    return 0;
}