1. `&` (Address-of) memberikan alamat/catatan memori yang akan di alokasi kepada `scanf`
2. integer overflow(Meluap dan Berputar(wrap-around) `-128`)
3. `%d` format specifier yang di khususkan untuk integer.

**Klarifikasi Soal #2**: Untuk **unsigned char** (0 s.d. 255), jika diisi `256`, nilainya akan meluap dan berputar (*wrap-around*) kembali ke **0** (karena tidak menyimpan bilangan negatif). Jika **signed char** (-128 s.d. 127), barulah saat diisi `128` ia berputar ke **\-128**.