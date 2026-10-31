#include <stdio.h>

int HasilBilangan(int a, int b, int c, int d) {
  int m = a;
  if (b > a) m = b;
  if (c > a) m = c;
  if (d > a) m = d;
  return m;
}

int main() {
  int a, b, c, d;
  scanf("%d, %d, %d, %d", &a, &b, &c, &d);
  int hasil = HasilBilangan(a, b, c, d);
  printf("%d\n", hasil);
    return 0;
}
