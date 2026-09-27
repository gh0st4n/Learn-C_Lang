#include <stdio.h>

/*
Soal :
Bagaimana cara nya membuat kondisi, jika dibawah 555 output low, jika diatas 555 high, dan jika tidak Correct

output:
```
Your guess is too low.
Your guess is too high.
Correct. You guessed it!
```
 */

void guessNumber(int guess) {
    if (guess < 555) {
        printf("Your guess is too low.\n");
    }else if (guess > 555) {
        printf("Your guess is too high.\n");
    }else {
        printf("Correct. You guessed it!\n");
    }
}

int main() {
    guessNumber(500);
    guessNumber(600);
    guessNumber(555);
}
