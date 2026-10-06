#include <stdio.h>

int main() {
  int a;

  printf("Masukkan Angka: "); scanf("%d", &a);

  if (a % 2 == 0) {
    printf("Angka yang lu inputkan %d adalah Genap", a);
  } else if ( a % 2 == 1) {
    printf("Angka yang lu inputkan %d adalah Ganjil", a);
  } else {
    printf("Invalid input");
  }

  return 0;
}
