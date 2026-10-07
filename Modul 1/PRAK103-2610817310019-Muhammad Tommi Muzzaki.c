#include <stdio.h>

int main() {
  float a = 9, b = 6, x = 10, y = 7;
  printf("Variabel a bernilai %d\n", (int)a);
  printf("Variabel b bernilai %d\n", (int)b);
  printf("Variabel x bernilai %d\n", (int)x);
  printf("Variabel y bernilai %d\n", (int)y);
  printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f\n", ((a + b) * x) / y);
  return 0;
}
