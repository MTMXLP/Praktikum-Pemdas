#include <stdio.h>

int main() {
  int soldier = 958730, hero = 5;
  printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", soldier);
  printf("Jumlah pahlawan = %d\n", hero);
  printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", 
         soldier / hero);
  return 0;
}
