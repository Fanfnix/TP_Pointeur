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
            printf("Vous aves choisi : %s\n", (*app).menus[choix].option);
        }
    }
}