#include <stdio.h>

int main() {
  int a;
  int b;

  printf("Masukkan Nilai A : "); scanf("%d", &a);
  printf("Masukkan Nilai B : "); scanf("%d", &b);

  int penjumlahan = a + b;
  int penguragan = a - b;
  int perkalian = a * b;
  int sisaBagi = a % b;

  printf("penjumlahan : %d\n", penjumlahan);
  printf("penguragan : %d\n", penguragan);
  printf("perkalian : %d\n", perkalian);
  printf("sisaBagi : %d\n", sisaBagi);

  return 0;
}
