#include "fct.h"
#include <stdio.h>


void displayMenus(const struct Application * app) {
    printf("--- %s ---\n", (*app).nom);
    for (int i = 0; i < (*app).nb_menus; i++) {
        printf("%d. %s\n", i+1, (*app).menus[i].option);
    }
    printf("Choisissez une option (0 pour quitter) : ");
}


void runApplication(const struct Application * app) {
    int choix = -1;
    while (choix != 0) {
        displayMenus(app);
        scanf("%d", &choix);
        if (choix != 0) {
            printf("    Vous aves choisi : %s\n", (*app).menus[choix-1].option);
        }
    }
}


void runPhone(struct Application * app1, struct Application * app2) {
    int choix = -1;
    while (choix != 0) {
        printf("--- Applications ---\n");
        printf("1. %s\n", (*app1).nom);
        printf("2. %s\n", (*app2).nom);
        printf("3. Modifier le menu de '%s'\n", (*app1).nom);
        printf("4. Modifier l'application '%s'\n", (*app2).nom);
        printf("0. Quitter\n");
        printf("    Choisissez une option (0 pour quitter) : ");
        scanf("%d", &choix);
        if (choix == 1) {
            printf("        Vous avez choisi : %s\n", (*app1).nom);
            runApplication(app1);
        }
        else if (choix == 2) {
            printf("        Vous avez choisi : %s\n", (*app2).nom);
            runApplication(app2);
        }
        else if (choix == 3) {
            printf("        Vous avez choisi : Modifier le menu de '%s'\n", (*app1).nom);
            updateMenus(app1, 2, "Nouvelle photo");
        }
        else if (choix == 4) {
            printf("        Vous avez choisi : Modifier l'application '%s'\n", (*app2).nom);
            updateApplication(app2, "Discord", (*app2).menus, 2);
        }
    }
}


void updateMenus(struct Application * app, int index, const char * newOption) {
    if (index <= (*app).nb_menus) {
        (*app).menus[index-1].option = newOption;
        printf("            L'option %d. à maintenant comme nom '%s'\n", index, (*app).menus[index-1].option);
    }
    else {
        printf("            Index incorrect. La modification à échoué\n");
    }
}


void updateApplication(struct Application * app, const char * newName, struct Menu * newMenus, int newNb_menus) {
    (*app).nom = newName;
    (*app).menus = newMenus;
    (*app).nb_menus = newNb_menus;
}