#include <stdio.h>

struct Rectangle {
    float longueur;
    float largeur;
};

float calculerAire(struct Rectangle r) {
    return r.longueur * r.largeur;
}

int main() {
    struct Rectangle rect = {5.0, 3.0};
    float aire = calculerAire(rect);
    printf("L'aire du rectangle est: %.2f\n", aire);

    return 0;
}
