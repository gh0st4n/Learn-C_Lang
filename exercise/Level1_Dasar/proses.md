```age.c
#include <stdio.h>

int main(void) {
  int age;

  printf("Masukkan umur Lo : "); scanf("%d", &age);
  printf("Umur Lo %d", age);

  return 0;
}
```

```cal.c
#include <stdio.h>

int main(int) {
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
```

```fix.c
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
```