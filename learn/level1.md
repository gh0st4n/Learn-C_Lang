Kerja bagus! Jawaban kamu di **Level 0** sempurna 100%! 🎯
* Kode program dan perintah `gcc -o compile/pemeriksa` dieksekusi dengan tepat.
* Semua 3 bug pada tantangan kode berhasil kamu temukan (`main`, `;` pada `printf`, dan `;` pada `return`).
* Penjelasan kamu mengenai preprocessor, perbedaan source code vs binary, dan `\n` sangat akurat.

Mari kita naik ke **Level 1 – Dasar (Variables, Data Types, Printf/Scanf, & Operators)**!

---

### 🎯 Level 1: Dasar (Variables, Data Types, Printf/Scanf, & Operators)

---

#### 1. Tujuan Belajar
- Memahami konsep variabel, konstanta, serta tipe data dasar (`int`, `float`, `char`, `double`) beserta ukuran memori dan rentangnya.
- Menguasai pencetakan data (`printf` + format specifier) dan penerimaan input pengguna (`scanf`).
- Menggunakan operator aritmetika, perbandingan, dan logika serta memahami akar celah seperti **Integer Overflow**.

---

#### 2. Analogi Sederhana
* **Variabel** = **Kotak Berlabel** di dalam gudang (memori RAM). Kamu menempelkan label nama (`myNum`), menentukan tipe barang yang boleh masuk (`int` untuk angka bulat, `char` untuk 1 huruf), lalu mengisi nilainya.
* **Tipe Data** = **Ukuran & Jenis Kotak**. Kotak `char` ukurannya sangat kecil (1 byte), sedangkan `double` adalah kotak besar (8 byte).
* **Format Specifier (`%d`, `%f`, `%c`)** = **Kaca Pembesar**. Kamu memberi tahu `printf` atau `scanf`: *"Tolong intip kotak ini dan baca isinya sebagai angka desimal (`%d`), huruf (`%c`), atau desimal berkoma (`%f`)"*.

---

#### 3. Penjelasan Konsep & Contoh Kode

##### A. Variables & Constants
*(Lihat bagian: Variables & Constants)*

```c
int myNum = 15;        // Deklarasi & inisialisasi variabel myNum bernilai 15
myNum = 10;            // Nilai variabel myNum diubah menjadi 10

const int BIRTHYEAR = 1980; // Konstanta: nilainya terkunci, tidak bisa diubah lagi
```

---

##### B. Data Types & Format Specifier
*(Lihat bagian: Data Types -> Basic data types & Basic format specifiers)*

| Data Type | Size (Ukuran) | Rentang Nilai (Range) | Format Specifier |
|---|---|---|---|
| `char` | 1 byte | −128 ~ 127 | `%c` |
| `unsigned char` | 1 byte | 0 ~ 255 | `%c` / `%d` |
| `int` | 2 s.d. 4 bytes | −2,147,483,648 ~ 2,147,483,647 (pada sistem 32/64-bit) | `%d` atau `%i` |
| `unsigned int` | 2 s.d. 4 bytes | 0 ~ 4,294,967,295 | `%u` |
| `float` | 4 bytes | Desimal presisi tunggal | `%f` |
| `double` | 8 bytes | Desimal presisi ganda | `%lf` |

> `[DI LUAR NOTE]` **Catatan Arsitektur**: Di tabel note tertulis `int` berukuran `2 to 4 bytes`. Pada komputer modern (32-bit & 64-bit Linux/Windows), `int` hampir selalu 4 byte (32 bit). Ukuran pasti tipe data di C sangat **bergantung pada arsitektur platform** dan compiler yang digunakan.

Contoh Pencetakan Variabel *(Lihat bagian: Print text)*:
```c
int testInteger = 5;
float f = 5.99;
char myLetter = 'D';

printf("Number = %d\n", testInteger); // %d untuk int
printf("Value = %f\n", f);             // %f untuk float
printf("Letter = %c\n", myLetter);     // %c untuk char
```

---

##### C. User Input (`scanf`)
*(Lihat bagian: User input)*

```c
int myNum;
printf("Please enter a number: \n");
scanf("%d", &myNum); 
printf("The number you entered: %d", myNum);
```
**Penjelasan Operator `&` (Address-of)**:
Pada `scanf("%d", &myNum)`, simbol `&` berarti "berikan **alamat memori** dari kotak `myNum` ke `scanf`", sehingga `scanf` tahu ke mana ia harus menyimpan angka yang diketik oleh pengguna.

---

##### D. Operator Aritmetika, Perbandingan, & Logika
*(Lihat bagian: Operators -> Arithmetic, Comparison, Logical)*
* **Aritmetika**: `+`, `-`, `*`, `/`, `%` (Modulo/sisa bagi), `++` (Tambah 1), `--` (Kurang 1).
* **Perbandingan**: `==` (Sama dengan), `!=` (Tidak sama dengan), `>`, `<`, `>=`, `<=`.
* **Logika**: `&&` (AND - kedua syarat wajib True), `||` (OR - salah satu True), `!` (NOT - membalikkan nilai boolean).

---

#### 4. ⚠️ Awas Jebakan (Kesalahan Umum & MODE BUG HUNT)

Di note `C-cheatsheet.md` terdapat contoh kode yang mengandung kesalahan berisiko:

1. **Jebakan Input String `scanf`**:
   *(Lihat bagian: User input string)*
   ```c
   char firstName;
   scanf("%s", &firstName); // 🐛 BUG HUNT!
   ```
   * **Bug 1**: `&firstName` salah tipe argumen. Karena `firstName` adalah array, namanya sendiri sudah bertindak sebagai alamat memori.
   * **Bug 2**: `scanf("%s", ...)` tidak memiliki batasan panjang input! Jika user memasukkan 100 karakter ke array berukuran 30, akan terjadi **Buffer Overflow**.
2. **Format Specifier Tidak Cocok / Kurang Argumen**:
   *(Lihat bagian: Modify value)*
   Menulis `printf("%d %c %s", s1.myNum, s1.myLetter);` (3 specifier tetapi hanya ada 2 argumen) menyebabkan program membaca data acak/sampah dari stack (*undefined behavior*).
3. `[DI LUAR NOTE]` **Integer Overflow**:
   Jika variabel `signed char x = 127;` ditambah `1` (`x = x + 1`), nilainya **bukan 128**, melainkan meluap dan berputar (*wrap-around*) menjadi `-128`!

---

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
*(Kunci jawaban disembunyikan. Ketik **"Jawaban latihan Level 1"** jika ingin mencocokkan)*

---

#### 6. 🧐 Cek Pemahaman
1. Apa fungsi dari operator `&` (Address-of) saat digunakan pada `scanf("%d", &myNum)`?
2. `[DI LUAR NOTE]` Jika variabel ber-tipe `unsigned char` memiliki rentang `0 ~ 255`, apa yang terjadi pada nilainya jika kita mengisinya dengan angka `256`?
3. Mengapa format specifier `%d` tidak boleh digunakan untuk mencetak variabel tipe `float`?

---

#### 7. 🛡️ Kaitan ke Vulnerability Research (VR)
Memahami tipe data, rentang batas angka, dan format specifier adalah fondasi utama VR. Kesalahan specifier pada `printf` menjadi akar celah **Format String Vulnerability**, sedangkan penggunaan input tanpa batas seperti `scanf("%s")` adalah penyebab utama **Buffer Overflow**. Selain itu, celah **Integer Overflow** sering dipakai hacker untuk memanipulasi perhitungan ukuran memori agar bisa melompati sistem keamanan program.

---

#### 8. 📊 Ringkasan Level 1

| Konsep | Sintaks / Specifier | Karakteristik / Ukuran | Potensi Celah Keamanan (VR) |
|---|---|---|---|
| Integer | `int`, `%d` | 4 Byte (-2M s.d 2M) | Integer Overflow / Underflow |
| Karakter / Byte | `char`, `%c` | 1 Byte (-128 s.d 127) | Off-by-one / Type casting bug |
| Desimal | `float` (`%f`), `double` (`%lf`) | 4 / 8 Byte | Precision loss / unexpected behavior |
| Alamat Memori | `&variabel` | Menunjuk lokasi di RAM | Pointer misalignment / uninitialized write |
| Input User | `scanf("%d", &var)` | Mengisi variabel dari CLI | Buffer Overflow (jika string tanpa batas) |

---

Ketik **"lanjut"** untuk melangkah ke **Level 2 – Alur Program (if/else, switch, loop, enum)**, atau ketik jawaban latihanmu terlebih dahulu!
