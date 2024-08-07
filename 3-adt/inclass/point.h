#ifndef POINT_H
#define POINT_H

typedef struct Point {
    int x;
    int y;
} point;

// GETTER
#define ABSIS(P) P.x
#define ORDINAT(P) P.y

// SETTER
void setAbsis(point* p, int newX);
void setOrdinat(point* p, int newY);

// PROSEDUR (INPUT/OUTPUT)
void createPoint(point* p, int x, int y);
void readPoint(point* p);
void displayPoint(point p);

// OPERASI / FUNGSI
point move(point p, int dx, int dy);

#endif