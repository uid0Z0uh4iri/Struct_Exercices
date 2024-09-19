#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point *p = NULL;
    p = (struct Point*)malloc(sizeof(struct Point));

    p->x = 10;
    p->y = 20;

    printf("Point: x = %d, y = %d\n", p->x, p->y);

    free(p);
    return 0;
}
