#include <stdio.h>

// for문을 사용해서 2, 4, 6, 8, ..., 20 을출력한다.
// 단, 출력하려는 정수가 8의 배수이면 출력하지 않는다.

int main() {
  for (int i = 1; i <= 20; i++) {
    if (i % 2 == 0 && i % 8 != 0) {
      printf("%d\n", i);
    }
  }
  return 0;
}
