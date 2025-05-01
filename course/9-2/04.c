#include <stdio.h>

void intro();
void println_stars();
void get_int(int *num);
int sum(int x, int y);

void intro() { printf("=== 두 정수를 더하는 프로그램 ===\n"); }

void println_stars() { printf("**************\n"); }

void get_int(int *num) {
  printf("정수>> ");
  scanf("%d", num);
}

int sum(int x, int y) { return x + y; }

int main() {
  int a, b;
  intro();
  println_stars();
  get_int(&a);
  get_int(&b);
  println_stars();
  printf("a + b = %d\n", sum(a, b));
  return 0;
}