#include <stdio.h>

struct Produit {
    char nom[50];
    float prix;
    int quantite;
};

int main() {
    struct Produit produits[3] = {
        {"Produit A", 10.5, 5},
        {"Produit B", 20.0, 2},
        {"Produit C", 7.8, 10}
    };

    for (int i = 0; i < 3; i++) {
        printf("Produit: %s, Prix: %.2f, Quantité: %d\n", produits[i].nom, produits[i].prix, produits[i].quantite);
    }

    return 0;
}
