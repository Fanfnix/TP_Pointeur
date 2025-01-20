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
            printf("Vous aves choisi : %s\n", (*app).menus[choix-1].option);
        }
    }
}


void runPhone(const struct Application * app1, const struct Application * app2) {
    int choix = -1;
    while (choix == -1) {
        printf("--- Applications ---\n");
        printf("1. %s\n", (*app1).nom);
        printf("2. %s\n", (*app2).nom);
        printf("0. Quitter\n");
        printf("Choisissez une option (0 pour quitter) : ");
        scanf("%d", &choix);
        if (choix == 0) {
            break;
        }
        else if (choix == 1) {
            printf("Vous avez choisi %s\n", (*app1).nom);
            runApplication(app1);
        }
        else if (choix == 2) {
            printf("Vous avez choisi %s\n", (*app2).nom);
            runApplication(app2);
        }
        else {
            printf("Choisissez entre 0, 1 et 2\n");
            choix = -1;
        }
    }
}