#include <stdio.h>

/*
Soal :
Gabungkan ketiga variabel, lalu jumlahkan dengan nilai 12.750000.

Output :
```
The sum of a, b, and c is 12.750000.
```
 */

int main() {
  int a = 3;
  float b = 4.5;
  double c = 5.25;
  float sum;

  sum = a + b + c;

  printf("The sum of a, b, and c is %f.", sum);
  return 0;
}
