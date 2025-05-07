#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* repeat_char(char c, int n) {
  if (n <= 0) {
    return NULL;
  }

  char* repeated = (char*)malloc((n + 1) * sizeof(char));
  if (repeated == NULL) {
    perror("Failed to allocate memory");
    exit(EXIT_FAILURE);
  }

  for (int i = 0; i < n; i++) {
    repeated[i] = c;
  }
  repeated[n] = '\0';

  return repeated;
}

int main() {
  // char = 1byte
  // 50 * 1 = 50byte
  char* ptr = malloc(50 * sizeof(char));
  strcpy(ptr, "Hello, World!");
  printf("%s\n", ptr);
  free(ptr);

  // MacOS - 이거 왜 Segmentation Fault 발생 안함?
  // Use After Free
  strcpy(ptr, "Hello!");
  printf("%s\n", ptr);

  char character = '*';
  int times = 100;
  char* result = repeat_char(character, times);

  // Buffer Overflow (100 bytes of data in 50 bytes of space)
  strcpy(ptr, result);
  printf("%s\n", ptr);

  free(result);

  // Null Pointer (Uninitialized Free)
  // free((void*)0);
  char* null_ptr = NULL;
  // strcpy(null_ptr, "test");
  printf("%s\n", null_ptr);
  printf("%p\n", null_ptr);
  free(null_ptr);

  return 0;
}