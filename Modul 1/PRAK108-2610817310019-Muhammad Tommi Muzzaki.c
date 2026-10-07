#include <stdio.h>

int main() {
  int laps = 5, total_distance = 14;
  const float pi = 3.14;
  printf("Diketahui :\n");
  printf("Pak Dengklek mengelilingi taman = %d Putaran\n", laps);
  printf("Jarak tempuh Pak Dengklek = %d Kilometer\n", total_distance);
  printf("Jawaban :\n");
  printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", total_distance / (laps*2*pi));
  return 0;
}
