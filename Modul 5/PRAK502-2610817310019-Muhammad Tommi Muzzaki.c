#include <stdio.h>
#include <math.h>

int mutlak(int angka) {
  if (angka < 0) {
    return -angka;
  }
  return angka;
}

int hitung(int x, int y) {
  return mutlak(x - y); 
}

int HasilBilangan(int a, int b, int c, int d) {
  int m = a;
  if (b > a) m = b;
  if (c > a) m = c;
  if (d < a) m = d;
  return m;
}

int main() {
  int a, b, c, d;
  int Hasil;

  scanf("%d", &a);
  scanf("%d", &c);
  scanf("%d", &b);
  scanf("%d", &d);

  Hasil = hitung(a, b) + hitung(c, d);
  printf("%d", mutlak(Hasil));

  return 0;
}
