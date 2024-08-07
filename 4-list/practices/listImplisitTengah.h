/* Soal diadaptasi dari praktikum 4 tahun 2022 */
/* Objektif: Impelementasikan modul berikut dengan cara pembuatan ADT List
             dengan cara implisit dan penempatan elemen bisa ditengah */

#ifndef ADT_LIST_IMPLISIT_TENGAH_H
#define ADT_LIST_IMPLISIT_TENGAH_H

#include "boolean.h"

/* Kamus Umum */
#define MAX_CAPACITY 100
#define MARK -9999      /* Nilai tak terdefinisi */
#define INVALID_IDX -1  /* Indeks tak terdefinisi */

/* Definisi elemen dan koleksi objek */
#define ElType int

typedef struct {
	ElType contents[MAX_CAPACITY];  /* Memori tempat penyimpanan elemen (container) */
} List;


/* Indeks yang digunakan seberapa banyak memori itu terisi */
/* Jika L adalah List, cara deklarasi dan akses: */
/* Deklarasi: L : List */
/* Maka cara akses:
 * L.A untuk mengakses seluruh nilai elemen list
 * L.A[i] untuk mengakses elemen ke-i */


/* Membuat list kosong dengan cara pengisian list implisit kemudian mengembalikan hasilnya */
List MakeList();

/* Mengirimkan true jika list L kosong, mengirimkan false jika tidak */
boolean IsEmpty(List L);

/* Mengirimkan elemen list yang ke-idx, bila indeks yang diberikan diluar dari 
   kapasitas maksimum atau panjang dari List maka kembalikan mark */
ElType Get(List L, int idx);

/* Mengubah nilai elemen list pada indeks idx, bila indeks yang diberikan diluar dari 
   kapasitas maksimum atau panjang dari List maka jangan lakukan apa-apa */
void Set(List *L, int idx, ElType val);

/* Mengirimkan banyaknya elemen efektif list */
int Length(List L);

/* Mengirimkan indeks elemen pertama, bila list kosong maka kembalikan INVALID_IDX */
int FirstIdx(List L);

/* Mengirimkan indeks elemen terakhir, bila list kosong maka kembalikan INVALID_IDX */
int LastIdx(List L);

/* Mengembalikan true jika i adalah indeks yang valid utk ukuran list 
   yaitu antara indeks yang terdefinisi untuk list (MAX_CAPACITY) */
boolean IsIdxValid (List L, int i);

/* Mengirimkan true jika i adalah indeks yang terdefinisi utk list
   yaitu antara FirstIdx(L)..LastIdx(L) */
boolean IsIdxEff (List L, int i);

/* Mengirimkan true jika terdapat elemen X di dalam list 
   yaitu antara FirstIdx(L)..LastIdx(L) */
boolean Search(List L, ElType val);

/* Memasukkan nilai val ke awal list, lakukan pergeseran untuk elemen-elemen 
   yang sudah ada. Bila list sudah penuh, jangan lakukan apa-apa */
void InsertFirst(List *L, ElType val);

/* Memasukkan nilai val ke list pada indeks idx, bila diperlukan, lakukan pergeseran untuk elemen-elemen 
   yang sudah ada. Bila list sudah penuh atau berada di luar range FirstIdx(L)..LastIdx(L)+1, jangan lakukan apa-apa */
void InsertAt(List *L, ElType val, int idx);

/* Memasukkan nilai val ke akhir list. Bila list sudah penuh, jangan lakukan apa-apa */
void InsertLast(List *L, ElType val);

/* Mengapus nilai awal list, lakukan pergeseran untuk elemen-elemen 
   yang sudah ada. Bila list kosong, jangan lakukan apa-apa */
void DeleteFirst(List *L);

/* Menghapus nilai di indeks idx pada list, bila diperlukan, lakukan pergeseran untuk elemen-elemen 
   yang sudah ada. Bila list kosong atau berada di luar range FirstIdx(L)..LastIdx(L), jangan lakukan apa-apa */
void DeleteAt(List *L, int i);

/* Mengapus nilai akhir list, lakukan pergeseran untuk elemen-elemen 
   yang sudah ada. Bila list kosong, jangan lakukan apa-apa */
void DeleteLast(List *L);

#endif