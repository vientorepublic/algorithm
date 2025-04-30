#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // NULL 포인터로 초기화
  char *str = NULL;
  // 문자열 메모리 동적 할당
  // char = 1byte, 1 * 100 = 100byte
  str = (char *)malloc(100 * sizeof(char));
  if (str == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    return 1;
  }
  strcpy(str, "Hello, World!");
  printf("%s\n", str);
  free(str);
  str = NULL;
  printf("str = %p\n", str);

  // NULL 포인터로 초기화
  int *pi = NULL;
  // 정수 메모리 동적 할당
  // int = 4byte, 4 * 10 = 40byte;
  pi = (int *)malloc(10 * sizeof(int));
  if (pi == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    return 1;
  }
  printf("초기 = %d\n", *pi);
  *pi = 20;
  printf("간접 연산 수행 후 = %d\n", *pi);
  free(pi);
  pi = NULL;
  printf("pi = %p\n", pi);
  return 0;
}