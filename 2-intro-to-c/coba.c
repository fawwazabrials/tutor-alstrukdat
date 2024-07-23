#include <stdio.h>

void kurangSatu(int* x) {
    *x = *x - 1;
}

void kaliDengan(int* x, int y) {
    *x = *x * y;
}

int main() {

    int masukan;
    scanf("%d", &masukan);

    int input = 5;
    kurangSatu(&input);
    kaliDengan(&input, masukan);
    printf("Hasil kurang satu adalah %d\n", input);
}