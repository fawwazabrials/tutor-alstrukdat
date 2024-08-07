// taken from praktikum 1 alstrukdat 2021

// problem:
// buatlah program yang menerima input bilangan bulat yaitu detik. kemudian keluarkan bentuk detik 
// tersebut dalam format X jam Y menit Z detik

// input:
// 3820

// output:
// 1 jam 3 menit 40 detik

// note:
// - terdapat newline setelah keluaran output
// - untuk sekarang abaikan kasus dimana keluaran 0 detik mungkin terjadi

#include <stdio.h>

int main() {
    // KAMUS
    int second;
    int jam, menit, detik;

    // ALGORITMA
    scanf("%d", &second);
    jam = second / 3600;
    menit = (second % 3600) / 60;
    detik = second - (jam*3600 + menit*60);

    printf("%d jam %d menit %d detik\n", jam, menit, detik);
}