```cek.c
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
```

```forloop.c
#include <stdio.h>

int main() {
  int i = 0;

  for (i = 0; i < 10; i++) {
    if (i == 5) continue;
    printf("Nilai nya : %d\n", i);
  }
}
```

```
┌──> [ gh0st4n @ Gh0sT4n ] <<|= user =|>> [ Wed Oct 07 ] [ Level2_AlurProgram ]
└[T4n OS]->> gcc forloop.c -o compile/forloop

┌──> [ gh0st4n @ Gh0sT4n ] <<|= user =|>> [ Wed Oct 07 ] [ Level2_AlurProgram ]
└[T4n OS]->> ./compile/forloop
Nilai nya : 0
Nilai nya : 1
Nilai nya : 2
Nilai nya : 3
Nilai nya : 4
Nilai nya : 6
Nilai nya : 7
Nilai nya : 8
Nilai nya : 9
```

```fix.c
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
    case Ditolak:
      printf("Maaf, Anda ditolak.\n");
      break;
  }

  // Bug Hunt pada While Loop
  int counter = 1;

  do {
    printf("Iterasi ke-%d\n", counter);
    counter++;
  } while (counter <= 3);

  return 0;
}
```