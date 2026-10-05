```test.c
#include <stdio.h>

int main(void) {
	printf("Saya belajar C\n");
	printf("Untuk Vulnerabilty Research\n");
	return 0;
}
```

```bash
┌──> [ gh0st4n @ Gh0sT4n ] <<|= user =|>> [ Sun Oct 04 ] [ Level_1 ]
└[T4n OS]->> gcc test.c -o compile/pemeriksa

┌──> [ gh0st4n @ Gh0sT4n ] <<|= user =|>> [ Sun Oct 04 ] [ Level_1 ]
└[T4n OS]->> ./compile/pemeriksa
Saya belajar C
Untuk Vulnerabilty Research
```

```fix.c
#include <stdio.h>

int main(void) {
	printf("Selamat datang di C!\n");
	return 0;
}
```