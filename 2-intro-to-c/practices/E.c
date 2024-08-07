// problem:
// buat program yang mengakses dan memodifikasi nilai dari sebuah variabel menggunakan pointer.

// note:
// - terdapat newline setelah keluaran output

// steps:
// 1. bikin variable
// 2. bikin pointer dari variable itu
// 3. ubah nilai variable lewat pointer

#include <stdio.h>


int main() {
    int x;
    x = 5;

    printf("before: %d\n", x);

    int* px;
    px = &x;

    *px = 8; // <- Ngubah tanpa nulis x=8;

    printf("after: %d\n", x);
}