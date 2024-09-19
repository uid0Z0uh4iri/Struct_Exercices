#include <stdio.h>

struct CompteBancaire {
    char nom[50];
    float solde;
};

void ajouterSolde(struct CompteBancaire *compte, float montant) {
    compte->solde += montant;
}

int main() {
    struct CompteBancaire compte = {"Mohamed Zouhairi", 1000.0};

    ajouterSolde(&compte, 500.0);
    printf("Nom: %s, Solde: %.2f\n", compte.nom, compte.solde);

    return 0;
}
