#include <stdio.h>

struct Cercle {
    float rayon;
};

float calculerAire(struct Cercle c) {
    return 3.14159 * c.rayon * c.rayon;
}

int main() {
    struct Cercle cercle = {5.0};
    float aire = calculerAire(cercle);
    printf("L'aire du cercle est: %.2f\n", aire);

    return 0;
}
