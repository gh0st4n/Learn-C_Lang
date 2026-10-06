#include <stdio.h>

int main(void) {
  int angka1 = 10;
  int angka2;
  
  // Minta input angka kedua
  printf("Masukkan angka kedua: "); scanf("%d", &angka2);

  int total = angka1 + angka2;

  // Cetak nilai
  printf("Nilai 1: %d, Nilai 2: %d, Total: %d\n", angka1, angka2, total);
  
  return 0;
}

