#include <stdio.h>

struct Date {
    int jour;
    int mois;
    int annee;
};

int main() {
    struct Date *d = NULL;
    d = (struct Date*)malloc(sizeof(struct Date));

    d->jour = 18;
    d->mois = 9;
    d->annee = 2024;

    printf("Date: %02d/%02d/%d\n", d->jour, d->mois, d->annee);

    free(d);
    return 0;
}
