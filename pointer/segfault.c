#include <stdio.h>
#include <string.h>

// 이 코드는 메모리 오류(Segmentation Fault)를 발생시키는 여러 예시를
// 나열합니다. 잘못된 메모리 쓰기와 참조는 프로그램의 예상치 못한 동작을
// 유발하며 보안 위협을 초래할 수 있습니다.

int main() {
  // NULL 포인터 사용
  char *str = NULL;
  strcpy(str, "Hello, World!");

  // NULL 포인터 참조
  int *ptr = NULL;
  printf("%d\n", *ptr);

  // 배열 인덱스를 벗어난 접근
  int arr[5] = {1, 2, 3, 4, 5};
  printf("%d\n", arr[10]);

  // 해제된 메모리 접근(Dangling Pointer)
  int *ptr = malloc(sizeof(int));
  *ptr = 10;
  free(ptr);
  printf("%d\n", *ptr);

  return 0;
}