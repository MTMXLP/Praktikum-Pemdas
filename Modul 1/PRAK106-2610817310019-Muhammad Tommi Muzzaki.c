#include <stdio.h>

int main() {
  int a = 4, b = 8, c = 3;
  printf("Variabel a bernilai %d\n", a);
  printf("Variabel b bernilai %d\n", b);
  printf("Variabel c bernilai %d\n", c);
  int a_eq_b = (a == b);
  printf("Apakah a sama dengan b ? jawabannya adalah %d\n", a_eq_b);
  int b_gt_c = (b >= c) ? 1 : 0;
  printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n", b_gt_c);
  printf("Apakah a tidak sama dengan c ? jawabannya adalah ");
  printf("%d\n", (a != c) ? 1 : 0);
  return 0;
}
