#include <stdio.h>
#include <string.h>

// Définition de la structure Personne
struct Personne {
    char nom[50];
    char prenom[50];
    int age;
};

int main() {
    // Création d'une variable de type Personne
    struct Personne individu;

    // Assignation des valeurs aux champs
    strcpy(individu.nom, "Zouhairi");
    strcpy(individu.prenom, "Mohamed");
    individu.age = 27;

    // Affichage des valeurs
    printf("Nom : %s\n", individu.nom);
    printf("Prénom : %s\n", individu.prenom);
    printf("Âge : %d ans\n", individu.age);

    return 0;
}
