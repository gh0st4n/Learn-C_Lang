### 🎯 Level 0: Persiapan (Hello World & Dasar Kompilasi C)

#### 1. Tujuan Belajar
- Memahami perbedaan antara **Source Code** dan **Binary (Executable)**.
- Mampu menulis kode "Hello World!", mengompilasi menggunakan `gcc`, dan menjalankannya.
- Memahami elemen dasar struktur C: `#include`, `main()`, `printf()`, dan komentar.

#### 2. Analogi Sederhana
* **Source Code (`.c`)** = **Resep Masakan** yang ditulis dalam bahasa manusia (teks biasa). Kamu bisa membaca, mengedit, dan membagikannya.
* **Compiler (`gcc`)** = **Koki Otomatis** yang membaca resep dan mengolahnya.
* **Binary File** = **Makanan Siap Saji** (hasil olahan berupa instruksi mesin `0` dan `1`). Komputer hanya bisa "memakan" binary ini, bukan resepnya langsung.

#### 3. Penjelasan Konsep & Contoh Kode

##### A. Struktur Kode Hello World
*(Lihat bagian: Getting Started -> hello.c)*

```c
#include <stdio.h>

int main(void) {
  printf("Hello World!\n");

  return 0;
}
```

**Penjelasan baris demi baris:**
* **Baris 1 (`#include <stdio.h>`)**: Perintah preprocessor untuk memasukkan berkas header *Standard Input Output*. Tanpa baris ini, komputer tidak tahu cara kerja fungsi `printf`.
* **Baris 3 (`int main(void)`)**: Titik awal (*entry point*) eksekusi setiap program C. Kata `int` menandakan fungsi ini memberikan nilai balik berupa angka bulat ke sistem operasi, dan `(void)` berarti fungsi ini tidak menerima argumen.
* **Baris 4 (`printf("Hello World!\n");`)**: Fungsi untuk menampilkan teks ke layar. Karakter `\n` adalah *newline* (pindah baris). Setiap instruksi C wajib diakhiri titik koma (`;`).
* **Baris 6 (`return 0;`)**: Mengirim kode status `0` ke OS yang menandakan program sukses berjalan tanpa kendala.

##### B. Cara Kompilasi dan Menjalankan Binary
*(Lihat bagian: Getting Started -> hello.c)*

Di dalam terminal/command line:
```bash
$ gcc hello.c -o hello
$ ./hello
```

**Penjelasan perintah:**
* **`gcc hello.c`**: Memanggil compiler GCC untuk membaca berkas sumber `hello.c`.
* **`-o hello`**: Menyimpan hasil kompilasi menjadi berkas executable bernama `hello`.
* **`./hello`**: Menjalankan berkas binary `hello` dari direktori saat ini. Output yang muncul: `Hello World!`.

##### C. Komentar dalam Kode
*(Lihat bagian: Comment)*

```c
// ini adalah komentar satu baris
printf("Hello World!"); // Komentar bisa ditaruh di mana saja

/* Komentar multi-baris,
   diabaikan oleh compiler */
```
Komentar hanya dibaca oleh manusia untuk dokumentasi dan akan dibuang saat kompilasi.

##### D. `[DI LUAR NOTE]` Proses Kompilasi 4 Tahap
Saat kamu mengeksekusi `gcc hello.c -o hello`, compiler bekerja melewati 4 tahapan utama:
1. **Preprocessing**: Menghilangkan komentar dan memproses perintah `#include`.
2. **Compilation**: Mengubah kode C menjadi bahasa **Assembly** (*human-readable machine instructions*).
3. **Assembly**: Mengubah kode Assembly menjadi **Object Code** (bahasa mesin/biner).
4. **Linking**: Menggabungkan Object Code dengan pustaka luar (seperti `stdio.h`) hingga tercipta binary mandiri.

---

#### 4. ⚠️ Awas Jebakan (Kesalahan Umum Pemula)
1. **Lupa Titik Koma (`;`)**: C sangat ketat, lupa `;` di akhir baris akan menggagalkan kompilasi.
2. **Case Sensitivity**: Huruf besar/kecil berpengaruh. Mengetik `Printf` atau `Main` akan menghasilkan error.
3. **Menjalankan file `.c`**: Mencoba mengklik/menjalankan `hello.c` secara langsung (bukan binary `hello` hasil kompilasi).

---

#### 5. 🧪 Latihan 3 Tingkat

* **Easier (Mudah)**: Buatlah kode C yang mencetak kalimat `"Saya belajar C"` di baris pertama dan `"Untuk Vulnerability Research"` di baris kedua.
* **Medium (Sedang)**: Tuliskan perintah terminal `gcc` untuk mengompilasi berkas `tes.c` menjadi file eksekusi bernama `pemeriksa`.
* **Challenge (Tantangan / Bug Hunt)**: Kode di bawah ini gagal dikompilasi. Bisakah kamu menemukan **3 kesalahan** di dalamnya?
  ```c
  #include <stdio.h>

  int Main(void) {
      printf("Selamat datang di C!\n")
      return 0
  }
  ```
*(Kunci jawaban disembunyikan. Ketik **"Jawaban latihan Level 0"** jika ingin mencocokkan)*

---

#### 6. 🧐 Cek Pemahaman
1. Mengapa baris `#include <stdio.h>` wajib ada saat kita menggunakan fungsi `printf`?
2. Apa perbedaan utama antara berkas `hello.c` dan berkas binary `hello`?
3. Karakter apakah yang digunakan dalam `printf` untuk berpindah ke baris baru?

---

#### 7. 🛡️ Kaitan ke Vulnerability Research (VR)
Dalam riset kerentanan (VR), memahami bahwa **Source Code dikompilasi menjadi Binary** adalah batu pijakan awal. Sering kali seorang VR tidak memiliki akses ke kode sumber (*Closed Source Software*), sehingga mereka harus menganalisis berkas binary langsung menggunakan teknik **Reverse Engineering** untuk menemukan celah keamanan di tingkat instruksi mesin.

---

#### 8. 📊 Ringkasan Level 0

| Konsep | Perintah / Sintaks | Fungsi |
|---|---|---|
| Include Header | `#include <stdio.h>` | Memuat pustaka I/O standar |
| Main Function | `int main(void) { ... }` | Titik awal eksekusi program |
| Output Teks | `printf("teks\n");` | Menampilkan teks ke terminal |
| Kompilasi GCC | `gcc file.c -o output` | Mengubah source code menjadi binary |
| Eksekusi Binary | `./output` | Menjalankan program binary |
| Komentar | `//` atau `/* ... */` | Catatan non-eksekusi |

---

Ketik **"lanjut"** untuk masuk ke **Level 1 – Dasar (Variables, Data Types, Printf & Scanf)**, atau ketik salah satu perintah perintah latihan di atas!
