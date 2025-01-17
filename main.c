#include "fct.h"
#include <stdio.h>

int main() {

    struct Menu photoMenus[] = {"Regarder une photo", "Prendre une photo"};

    struct Application photoApp = {"Photo", photoMenus, 2};

    displayMenus(&photoApp);

    return 0;
}