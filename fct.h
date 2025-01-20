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
void runApplication(const struct Application * app);
void runPhone(struct Application * app1, struct Application * app2);
void updateMenus(struct Application * app, int index, const char * newOption);
void updateApplication(struct Application * app, const char * newName, struct Menu * newMenus, int newNb_menus);

#endif