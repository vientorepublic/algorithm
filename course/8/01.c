#include <stdio.h>

int main() {
  int x = 333;
  char str[10] = "abc";

  printf("0123456789\n");
  printf("----------\n");

  printf("%d\n", x);
  printf("%5d\n", x);
  printf("%05d\n", x);

  printf("%s\n", str);
  printf("%5s\n", str);

  return 0;
}