// taken from praktikum 1 alstrukdat 2021

// problem:
// bilangan subset genap adalah bilangan yang dapat dibentuk dari penjumlahan dua bilangan genap asli. diberikan suatu
// bilangan, tentukan apakah bilangan tersebut merupakan bilangan subset genap!

// input:
// 8

// output:
// Ya

// penjelasan:
// 8 = 4 + 4 <- 4 merupakan bilangan genap asli

// note:
// - terdapat newline setelah keluaran output
// - keluaran hanya berupa "Tidak" dan "Ya"

#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    if (x % 2 == 0) {
        if ((x/2) % 2 == 0) {
            printf("Ya\n");
        }
        else {
            printf("Tidak\n");
        }
    } 
    else {
        printf("Tidak\n");
    }
}