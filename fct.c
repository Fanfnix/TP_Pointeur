#include "fct.h"

void min_max(int tab[], int size, int * min, int * max) {
    if (size < 1) {
        return;
    }
    *min = tab[0];
    *max = tab[0];
    for (int i = 0; i < size; i++) {
        if (*min < tab[i]) {
            *min = tab[i];
        }
        if (*max > tab[i]) {
            *max = tab[i];
        }
    }
}