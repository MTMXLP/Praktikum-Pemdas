#include <stdio.h>

int main() {
  float PI = 22/7.0;
  float r;
  float t;

  scanf("%f %f", &r, &t);
  printf("%f %f\n", r, t);
  printf("%f\n", PI * r * r * t);
  printf("%f\n", 2 * PI * r * (r + t));
  printf("%f\n", 2 * PI * r );
  return 0;
}
