#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *str = (char *)malloc(100 * sizeof(char));
  if (str == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    return 1;
  }
  strcpy(str, "Hello, World!");
  printf("%s\n", str);
  free(str);

  int *pi = (int *)malloc(10 * sizeof(int));
  if (pi == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    return 1;
  }
  printf("초기 = %d\n", *pi);
  *pi = 20;
  printf("간접 연산 수행 후 = %d\n", *pi);
  free(pi);
  pi = NULL;  // Avoid dangling pointer
  printf("pi = %p\n", pi);
  return 0;
}