#include "fct.h"
#include <stdio.h>

int main() {

    struct Menu photoMenus[] = {"Regarder une photo", "Prendre une photo"};
    struct Application photoApp = {"Photo", photoMenus, 2};

    struct Menu messageMenus[] = {"Lire un message", "Envoyer un message"};
    struct Application messageApp = {"Message", messageMenus, 2};

    runPhone(&photoApp, &messageApp);

    return 0;
}