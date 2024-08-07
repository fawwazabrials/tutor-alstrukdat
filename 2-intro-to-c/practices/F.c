// problem:
// lanjutkan program dibawah untuk menukar 2 angka menggunakan pointer.

#include <stdio.h>

void swap(int *a, int *b) {
    int temporary;

    temporary = *a;
    *a = *b;
    *b = temporary;
}

int main() {
    // terima 2 nilai integer
    int x, y;
    scanf("%d %d", &x, &y);

    // keluarkan kedua nilai asli tersebut
    printf("%d %d\n", x, y);
    
    // jalankan prosedur swap
    swap(&x, &y);
    
    // keluarkan kedua nilai baru tersebut
    printf("%d %d\n", x, y);


    return 0;
}