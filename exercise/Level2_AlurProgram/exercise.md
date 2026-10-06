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

#### 6. 🧐 Cek Pemahaman
1. Apa perbedaan mendasar antara perulangan `while` dan `do/while`?
2. Mengapa lupa menuliskan `break` pada blok `case` di dalam `switch` bisa berbahaya bagi logika program?
3. Apa perbedaan fungsi antara perintah `break` dan `continue` di dalam sebuah perulangan?