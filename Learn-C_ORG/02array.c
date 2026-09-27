#include <stdio.h>

/*
 * Soal :
 Bagaimana memahami computer memory

 Output :
 ```
 The average of the 3 grades is: 85
 ```
 */

int main() {
  int grades[3]; // Membuat grades hanya tiga
  int average;

  grades[0] = 80;
  grades[1] = 85;
  grades[2] = 90;

  average = (grades[0] + grades[1] + grades[2]) / 3;
  printf("The average of the 3 grades is: %d", average);

  return 0;
}
