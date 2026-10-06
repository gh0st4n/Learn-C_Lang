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
