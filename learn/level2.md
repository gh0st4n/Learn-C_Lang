Mantap sekali! Analisis dan perbaikan kode kamu di **Level 1** sangat tajam! 🎯

 Sedikit catatan evaluasi:
1. **`cal.c`**: Kode berjalan lancar! Catatan kecil pada deklarasi `int main(int)`: sebaiknya gunakan `int main(void)` atau `int main()`, karena `int` tanpa nama variabel di dalam parameter fungsi tidak lazim di C.
2. **Klarifikasi Soal #2**: Untuk **`unsigned char`** (0 s.d. 255), jika diisi `256`, nilainya akan meluap dan berputar (*wrap-around*) kembali ke **`0`** (karena tidak menyimpan bilangan negatif). Jika **`signed char`** (-128 s.d. 127), barulah saat diisi `128` ia berputar ke **`-128`**.

Secara keseluruhan, kamu sudah paham betul konsep variabel, tipe data, specifier, dan input/output!

---

### 🎯 Level 2: Alur Program (Conditionals, Switch, Loops, & Enum)

---

#### 1. Tujuan Belajar
- Menguasai percabangan kondisi: `if/else`, Ternary Operator (`? :`), dan `switch`.
- Menguasai perulangan: `while`, `do/while`, `for`, serta kata kunci `break` dan `continue`.
- Memahami penggunaan `enum` (Enumeration) untuk membuat tipe data kustom berupa daftar konstanta.

---

#### 2. Analogi Sederhana
* **`if / else`** = **Satpam Pemeriksa KTP**. *"Jika umur >= 18, boleh masuk. Jika tidak, balik kanan!"*
* **`switch`** = **Tombol Lift**. Kamu menekan tombol angka `3`, lift langsung meloncat menuju lantai `3` (*case 3*).
* **`while` / `for` loop** = **Pekerjaan Mandor di Pabrik**. *"Selama barang di ban berjalan masih ada (`while`), masukkan ke dalam kardus!"* Atau *"Lakukan pengisian air sebanyak 10 kali (`for`)*.
* **`enum`** = **Daftar Menu Pilihan Fixed**. Daripada mengingat angka 0, 1, 2, kamu membuat nama berlabel seperti `LOW`, `MEDIUM`, `HIGH`.

---

#### 3. Penjelasan Konsep & Contoh Kode

##### A. `if`, `else if`, `else` & Ternary Operator
*(Lihat bagian: Conditions & Short Hand If...Else)*

```c
int time = 20;

if (time < 18) {
  printf("Good day.\n");
} else {
  printf("Good evening.\n");
}

// Short Hand If...Else (Ternary Operator)
// Format: variable = (kondisi) ? nilai_jika_true : nilai_jika_false;
(time < 18) ? printf("Good day.\n") : printf("Good evening.\n");
```
**Penjelasan**:
Jika kondisi `time < 18` bernilai *True* (1), blok pertama dieksekusi. Jika *False* (0), blok `else` yang dieksekusi. Ternary operator adalah bentuk ringkas dari `if/else` sederhana.

---

##### B. `switch` Statement
*(Lihat bagian: Switch)*

```c
int day = 4;

switch (day) {
  case 1:
    printf("Monday\n");
    break;
  case 2:
    printf("Tuesday\n");
    break;
  default:
    printf("Looking forward to the Weekend\n");
}
```
**Penjelasan**:
`switch` mengevaluasi nilai variabel `day`. Kata kunci `break` **sangat penting** untuk menghentikan eksekusi agar tidak mengeksekusi `case` di bawahnya (*fall-through*). Jika tidak ada `case` yang cocok, perintah di bawah `default` yang dijalankan.

---

##### C. Loops (`while`, `do/while`, `for`, `break/continue`)
*(Lihat bagian: While Loop, Do/While Loop, For Loop, Break and Continue)*

```c
// 1. While Loop: Cek kondisi DULU, baru jalankan
int i = 0;
while (i < 5) {
  printf("%d\n", i);
  i++;
}

// 2. Do/While Loop: Jalankan DULU minimal 1 kali, baru cek kondisi
int j = 0;
do {
  printf("%d\n", j);
  j++;
} while (j < 5);

// 3. For Loop: Inisialisasi, Kondisi, dan Increment dalam 1 baris
for (int k = 0; k < 5; k++) {
  if (k == 2) continue; // Lewati angka 2, lanjut ke iterasi berikutnya
  if (k == 4) break;    // Hentikan perulangan saat k == 4
  printf("%d\n", k);
}
```

---

##### D. Enum (Enumeration)
*(Lihat bagian: Enum)*

```c
enum Level {
  LOW = 25,
  MEDIUM, // Otomatis bernilai 26
  HIGH    // Otomatis bernilai 27
};

enum Level myVar = MEDIUM;
printf("%d", myVar); // Mencetak 26
```
`enum` memberikan nama simbolik pada angka bulat agar kode lebih mudah dibaca.

---

#### 4. ⚠️ Awas Jebakan (Kesalahan Umum & MODE BUG HUNT)

1. **Bug Nama Enum pada `switch` (Kesalahan Kompilasi)**:
   Perhatikan jika enum didefinisikan sebagai:
   `enum Weekday { Mon, Tues, Wed, Thurs, Fri };`
   Lalu pada `switch` kamu menulis: `case Thursday:` 🐛 **BUG HUNT!**
   Nama `Thursday` tidak dikenal oleh compiler karena di dalam `enum` namanya disingkat menjadi `Thurs`. Ini menyebabkan *compile error*.
2. **Lupa Kata Kunci `break` pada `switch`**:
   Jika `break` lupa ditulis di akhir `case 1`, program akan terus mengeksekusi baris `case 2`, `case 3`, dan seterusnya (*Fall-through bug*).
3. **Infinite Loop (Perulangan Tak Terbatas)**:
   Lupa menaikkan nilai counter (misal lupa `i++` pada `while`) menyebabkan kondisi selalu *True*, membuat CPU terperangkap dalam perulangan selamanya (potensi celah **Denial of Service / DoS**).

---

#### 5. 🧪 Latihan 3 Tingkat

* **Easier (Mudah)**: Buatlah program yang meminta pengguna memasukkan angka bulat. Gunakan `if/else` untuk memeriksa apakah angka tersebut **genap** atau **ganjil** (Petunjuk: gunakan operator modulo `% 2`).
* **Medium (Sedang)**: Buatlah program dengan `for` loop yang mencetak angka dari `1` sampai `10`, tetapi **lewati angka 5** menggunakan `continue`.
* **Challenge (Tantangan / Bug Hunt)**: Audit kode di bawah ini! Terdapat **3 bug/kesalahan** (logika, kompilasi, & perulangan). Bisakah kamu menemukannya?
  ```c
  #include <stdio.h>

  enum Status { Diterima, Diproses, Ditolak };

  int main(void) {
      enum Status st = Diproses;

      // Bug Hunt pada Switch
      switch (st) {
          case Diproses:
              printf("Status sedang diproses...\n");
          case Diterima:
              printf("Selamat, Anda diterima!\n");
              break;
          case Reject:
              printf("Maaf, Anda ditolak.\n");
              break;
      }

      // Bug Hunt pada While Loop
      int counter = 1;
      while (counter <= 3) {
          printf("Iterasi ke-%d\n", counter);
      }

      return 0;
  }
  ```
*(Kunci jawaban disembunyikan. Ketik **"Jawaban latihan Level 2"** jika ingin mencocokkan)*

---

#### 6. 🧐 Cek Pemahaman
1. Apa perbedaan mendasar antara perulangan `while` dan `do/while`?
2. Mengapa lupa menuliskan `break` pada blok `case` di dalam `switch` bisa berbahaya bagi logika program?
3. Apa perbedaan fungsi antara perintah `break` dan `continue` di dalam sebuah perulangan?

---

#### 7. 🛡️ Kaitan ke Vulnerability Research (VR)
Logika alur program (`if/else`, `switch`, loop) adalah sasaran empuk serangan logika (*logic flaws*). Celah keamanan sering terjadi ketika developer lupa menagani kondisi `default` pada `switch` atau gagal memvalidasi batasan input sebelum percabangan `if`. Dalam reverse engineering, struktur `if` dan loop akan diubah oleh compiler menjadi instruksi lompatan (*Jump Instructions* seperti `jmp`, `je`, `jne` di Assembly). Riset VR berfokus memanipulasi alur logika ini agar program melompati fungsi autentikasi (misalnya melompati verifikasi password).

---

#### 8. 📊 Ringkasan Level 2

| Konsep | Sintaks Dasar | Kegunaan | Potensi Celah / Risk (VR) |
|---|---|---|---|
| Percabangan | `if (kondisi) { ... } else { ... }` | Evaluasi kondisi boolean | Bypass autentikasi jika logika salah |
| Ternary Operator | `(kondisi) ? true : false;` | Percabangan singkat 1 baris | Keterbacaan rendah pada logika kompleks |
| Multi Percabangan | `switch(var) { case X: break; }` | Memilih percabangan berdasarkan nilai | Fall-through bug jika lupa `break` |
| Perulangan | `while`, `do/while`, `for` | Mengulang blok kode | Infinite loop / DoS jika counter macet |
| Kontrol Loop | `break` (keluar), `continue` (skip) | Mengendalikan iterasi loop | Skipping penanganan error secara tidak sengaja |
| Enum | `enum Nama { KONTAN1, KONTAN2 };` | Membuat daftar konstanta bernama | Typo pada nama simbolik saat kompilasi |

---

Ketik **"lanjut"** untuk masuk ke **Level 3 – Data (Arrays, Strings, & Struct)**, atau berikan jawaban latihanmu lebih dulu!