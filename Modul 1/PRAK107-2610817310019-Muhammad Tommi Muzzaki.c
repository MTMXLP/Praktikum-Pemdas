#include <stdio.h>

int main() {
  int a = 4, b = 5, c = 7;
  int perimeter = a + b + c;
  int price_per_meter = 85000;
  printf("Diketahui :\n");
  printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", a, b, c);
  printf("Keliling Tanah Pak Dengklek adalah %d\n", perimeter);
  printf("Harga Tanah Per Meter adalah %d\n", price_per_meter);
  printf("Jawaban:\n");
  printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n",
         perimeter * price_per_meter);
  return 0;
}
