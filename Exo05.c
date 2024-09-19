#include <stdio.h>

struct Livre {
    char titre[100];
    char auteur[50];
    int annee;
};

struct Livre creerLivre(char titre[], char auteur[], int annee) {
    struct Livre livre;
    strcpy(livre.titre, titre);
    strcpy(livre.auteur, auteur);
    livre.annee = annee;
    return livre;
}

int main() {
    struct Livre livre = creerLivre("C Programming", "Dennis Ritchie", 1978);

    printf("Titre: %s\n", livre.titre);
    printf("Auteur: %s\n", livre.auteur);
    printf("Année: %d\n", livre.annee);

    return 0;
}
