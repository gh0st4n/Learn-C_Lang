#include <stdio.h>

int main(void) {
  int myNum = 15;   // Variabel dengan nilai 15
  printf("Nilai awal : %d\n", myNum);

  myNum = 10;       // Nilai Variabel myNum diubah
  printf("Nilai Perubahan : %d\n", myNum);

  const int myBirth = 2008;   // Nilai Variabelyang tidak dapat diubah, karena konstanta
  printf("Tahun Lahir GW : %d\n\n", myBirth);

  int testINT = 10;
  float f = 3.14;
  char myLetter = 'R';

  printf("Number : %d\n", testINT);
  printf("Float : %f\n", f);
  printf("Char : %c\n", myLetter);

  return 0;
}
