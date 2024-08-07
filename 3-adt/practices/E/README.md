# Daftar Nilai

Pak Briza ingin mengetahui rekap dari nilai-nilai praktikum pada matakuliah alstrokedeath. Beliau ingin mengetahui banyaknya jumlah mahasiswa yang lulus, indeks rata-rata, serta indeks akhir rata-rata kelas.

Program akan menerima input berupa nilai integer secara berulang hingga menerima input berupa -999. Lalu, program akan mengeluarkan tiga baris kalimat berupa "Jumlah mahasiswa yang lulus: _", "Nilai rata-rata: _", dan "Indeks akhir kelas: \_".

Adapun beberapa aturan yang diterapkan, yaitu:

1. Nilai yang valid adalah nilai yang berada antara range 0-4, selebih atau sekurangnya dianggap nilai kotor dan tidak masuk kedalam perhitungan.
2. Aturan indeks yang diterapkan adalah sebagai berikut:
    - Apabila nilai = 4.00, maka indeks adalah 'A'
    - Apabila nilai >= 3.00 dan nilai < 4.00, maka indeks adalah 'B'
    - Apabila nilai >= 2.00 dan nilai < 3.00, maka indeks adalah 'C'
    - Apabila nilai >= 1.00 dan nilai < 2.00, maka indeks adalah 'D'
    - Apabila nilai < 1.00, maka indeks adalah 'E'
3. Minimal indeks untuk lulus adalah 'B' (>= 3.00)
4. Nilai rata-rata ditulis dengan 2 angka desimal
5. Terdapat new line pada akhir kalimat
6. Bila tidak ada data yang valid (tidak ada yang memenuhi aturan 1), maka kembalikan "Tidak ada data"

Tulis dalam program bernama `daftar_nilai.c`

## Contoh

### Input 1

```
1
2
3
4
-999
```

### Output 1

```
Jumlah mahasiswa yang lulus: 2
Nilai rata-rata: 2.50
Indeks akhir kelas: C
```

### Input 2

```
7
0
3
4
-999
```

### Output 2

```
Jumlah mahasiswa yang lulus: 2
Nilai rata-rata: 2.33
Indeks akhir kelas: C
```

### Penjelasan 2

Hanya dihitung nilai 0, 3, dan 4 karena 7 tidak memenuhi persyaratan 1 (tidak dalam range [0,4] )

### Input 3

```
-1
10
-9
6
-999
```

### Output 3

```
Tidak ada data
```
