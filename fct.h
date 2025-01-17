#ifndef FCT
#define FCT

struct Menu {
    const char * option;
};

struct Application {
    const char * nom;
    struct Menu * menus;
    int nb_menus;
};

void displayMenus(const struct Application * app);

#endif