#ifndef FCT
#define FCT

struct Menu {
    const char * option[20];
};

struct Application {
    const char * nom[20];
    struct Menu * menus;
    int nb_menus;
};

void min_max(int tab[], int size, int * min, int * max);

#endif