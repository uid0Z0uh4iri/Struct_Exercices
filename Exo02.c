#include <stdio.h>

#define MAX_NOTES 5

struct Etudiant {
    char nom[50];
    char prenom[50];
    int notes[MAX_NOTES];
};

int main() {
    struct Etudiant etudiant = {"Zouhairi", "Mohamed", {15, 17, 20, 13, 18}};

    printf("Nom: %s\n", etudiant.nom);
    printf("Prenom: %s\n", etudiant.prenom);
    printf("Notes: ");
    for (int i = 0; i < MAX_NOTES; i++) {
        printf("%d ", etudiant.notes[i]);
    }
    printf("\n");

    return 0;
}
