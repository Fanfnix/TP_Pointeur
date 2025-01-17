#include "fct.h"
#include <stdio.h>

int main() {

    int min = 0;
    int max = 0;
    int tableau[] = {10, 2, 8, -7, 15, 2};
    min_max(tableau, 6, &min, &max);
    printf("Min = %d\nMax = %d", min, max);

    return 0;
}