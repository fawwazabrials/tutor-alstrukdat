# Struct (Tipe bentukan)

### How

```C
typedef struct <nama-tipe-kapital> {
    <type> <nama-variabel>;
    <type> <nama-variabel>;
    <type> <nama-variabel>;
    ...
} <nama-tipe-huruf-kecil>

```

### Example

```C
typedef struct Waktu {
    int jam;
    int menit;
    int detik;
} waktu;

void createWaktu(waktu* wkt, int jam, int menit, int detik) {
    wkt->jam = jam;
    wkt->menit = menit;
    wkt->detik = detik;
}

waktu wkt;
createWaktu(&wkt, 1, 30, 0);

```

# Compile ADT

`gcc <file-1> <file-2> -o <file-hasil>`

# Array

Sekumpulan elemen/nilai dengan tipe data yang sama dan diletakkan di memori secara kontigu.

-   Alokasi memori di awal, `int arr[5]`. Kalo mau nambah harus reallocate/relokasi
-   Kontigu
-   Awal dibikin nilainya pasti default (NULL, NIL, 0, -1)

Tipe-tipe array:

1. Array statik: Didefinisiin di compile time, udah jelas isi arraynya berapa waktu nulis kode/compile
2. Array dinamis: Didefinisiin di run-time, jadi bisa berubah-ubah sesuai input waktu jalanin program

## Cara penulisan

```C
<type> <nama-array>[<jumlah-elemen>]

int arr[5]; // Array of integers sejumlah 5, idx 0,1,2,3,4
arr[0] = 5;
arr[4] = 1;
arr[5] = 10; // ERROR; Index of out bounds;
printf("%d", arr[0]);

```

## Array Statik

Didefinisiin di runtime, gabisa diubah kapasitasnya

```C
// 1. Deklarasi (ngasih nama + kapasitas)
int arr[5];
//   v nyimpen pointer ke nilai ini (address)
// | 0 | 1 | 2 | 3 | 4 |

// 2. Inisialisasi
arr[0] = 1;
*(arr) = 1;

arr[2]   = 1;
*(arr+2) = 1;

```

## Array Dinamis

Bisa kita perbesar / perkecil kapasitasnya

```C
#include <stdlib.h>

int size;
scanf("%d", &size);

// 1. Deklarasi (ngasih nama)
int* arr;

// 2. Alokasi (ngasih kapasitas)
arr = (int*) malloc (size * (sizeof(int)));

// 3. Inisialisasi
arr[0] = 1;
*(arr) = 1;

// 4. Dealokasi (ngebebasin memori / ngebuang kapasitas)
free(arr);

```
