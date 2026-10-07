#include <stdio.h>

int main() {
  int item_A = 400000, item_B = 350000;
  int discount_A = 13, discount_B = 21;
  int price_A = item_A - item_A * discount_A/100, 
      price_B = item_B - item_B * discount_B/100;
  printf("Harga sepatu A adalah %d\n", item_A);
  printf("Harga sepatu B adalah %d\n", item_B);
  printf("Sepatu A mendapat diskon %d%% sehingga harganya menjadi %d\n", 
          discount_A, price_A
  );
  printf("Sepatu B mendapat diskon %d%% sehingga harganya menjadi %d\n", 
          discount_B, price_B
  );
}
