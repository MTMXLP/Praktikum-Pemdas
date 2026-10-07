#include <stdio.h>
#include <string.h>

void center_text(char text[], int width) {
  int text_length = strlen(text);
  int left_padding = (width - text_length) / 2;
  int right_padding = width - text_length - left_padding;
  printf("#");
  printf("%*s", left_padding, "");
  printf("%s", text);
  printf("%*s", right_padding, "");
  printf("#\n");
}

int main() {
  char name[] = "Muhammad Tommi Muzzaki";
  char nim[] = "2610817310019";
  int width = 28;
  printf("##############################\n");
  center_text("", width);
  center_text(name, width);
  center_text(nim, width);
  center_text("", width);
  printf("##############################\n");
  return 0;
}
