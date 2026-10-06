#### 5. 🧪 Latihan 3 Tingkat

* **Easier (Mudah)**: Buatlah program C yang meminta user memasukkan umur (angka bulat), lalu mencetak kembali umur tersebut ke layar.
* **Medium (Sedang)**: Buatlah program yang menerima input 2 angka bulat dari user, lalu menampilkan hasil penjumlahan (`+`), pengurangan (`-`), perkalian (`*`), dan sisa bagi (`%`) kedua angka tersebut.
* **Challenge (Tantangan / Bug Hunt)**: Kode di bawah ini memiliki **3 bug/kesalahan**. Bisakah kamu mengaudit dan menemukannya?
  ```c
  #include <stdio.h>

  int main(void) {
      int angka1 = 10;
      int angka2;

      // Cetak nilai
      printf("Nilai 1: %d, Nilai 2: %d, Total: %d\n", angka1, angka2);

      // Minta input angka kedua
      printf("Masukkan angka kedua: ");
      scanf("%f", angka2);

      return 0;
  }
  ```

#### 6. 🧐 Cek Pemahaman
1. Apa fungsi dari operator `&` (Address-of) saat digunakan pada `scanf("%d", &myNum)`?
2. `[DI LUAR NOTE]` Jika variabel ber-tipe `unsigned char` memiliki rentang `0 ~ 255`, apa yang terjadi pada nilainya jika kita mengisinya dengan angka `256`?
3. Mengapa format specifier `%d` tidak boleh digunakan untuk mencetak variabel tipe `float`?
