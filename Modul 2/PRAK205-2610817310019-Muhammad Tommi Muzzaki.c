#include <stdio.h>
#include <math.h>

int main() {
  float A, B, C, Keliling, Luas;
  scanf("%f %f", &A, &B);
  printf("%f %f\n", A, B);
  C = sqrt(B * B - A * A);
  printf("%f\n", C);

  return 0;
}


