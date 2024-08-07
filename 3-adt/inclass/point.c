#include <stdio.h>
#include "point.h"

void setAbsis(point* p, int newX) {
    p->x = newX;
}

void setOrdinat(point* p, int newY) {
    p->y = newY;
}

void createPoint(point* p, int x, int y) {
    setAbsis(p, x);     // p->x = x;
    setOrdinat(p, y);   // p->y = y;
}
void readPoint(point* p) {
    int x, y;
    scanf("%d %d", &x, &y);

    createPoint(p, x, y);
}
void displayPoint(point p) {
    printf("(%d,%d)\n", ABSIS(p), ORDINAT(p));
}

point move(point p, int dx, int dy) {
    point newP;
    createPoint(&newP, ABSIS(p)+dx, ORDINAT(p)+dy);
    return newP;
}