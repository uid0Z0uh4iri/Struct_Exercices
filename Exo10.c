#include <stdio.h>
#include <stdlib.h>

struct Employe {
    char nom[50];
    float salaire;
};

int main() {
    int n = 3;
    struct Employe *employes = (struct Employe*)malloc(n * sizeof(struct Employe));

    strcpy(employes[0].nom, "Employe A");
    employes[0].salaire = 2500.0;

    strcpy(employes[1].nom, "Employe B");
    employes[1].salaire = 3000.0;

    strcpy(employes[2].nom, "Employe C");
    employes[2].salaire = 2800.0;

    for (int i = 0; i < n; i++) {
        printf("Employé: %s, Salaire: %.2f\n", employes[i].nom, employes[i].salaire);
    }

    free(employes);
    return 0;
}
