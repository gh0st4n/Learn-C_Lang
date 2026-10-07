1.
    a. while
        Pengecekan : Dilakukan diawal, sebelum mengeksekusi kode
        Eksekusi : tidak akan mengeksekusi jika false
    b. do/while
        Pengecekan : Dilakukan diakhir, setelah mengeksekusi kode
        Eksekusi : akan mengeksekusi sekali dulu meskipun false
2. Jika lupa menulis `break` pada switch akan menyebabkan fall-through bug/menjalankan case selanjutnya tanpa persyaratan
3. 
    a. break : untuk menghentikan loop
    b. continue : untuk melewatinya

Ada 2 catatan kecil untuk bahan evaluasi:

1. **cek.c**: Logika `a % 2 == 0` sudah sangat tepat! Catatan kecil: untuk bilangan ganjil negatif di C, hasil `a % 2` bisa bernilai `-1`. Jadi cukup gunakan `if (a % 2 == 0)` untuk genap dan `else` untuk sisanya (ganjil).
2. **fix.c** **(Bug Hunt)**:
  * Kamu berhasil memperbaiki `Reject` menjadi `Ditolak` (sesuai `enum`) dan menghentikan *infinite loop* dengan menambahkan `counter++`.
  * **Satu detail tertinggal**: Di `case Diproses:` kamu belum menambahkan `break;`. Jadi jika `st = Diproses`, program akan mencetak *"Status sedang diproses..."* lalu membocorkan baris berikutnya *"Selamat, Anda diterima!"* (*fall-through*).