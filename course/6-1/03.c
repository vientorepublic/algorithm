#include <stdio.h>

// 문자-정수-문자-정수를 입력받고 그대로 출력.
// 작업을 5번 반복한다.

int main() {
  char char1, char2;
  int num1, num2;

  for (int i = 1; i <= 5; i++) {
    printf("문자-정수-문자-정수 입력 >> ");
    scanf(" %c %d %c %d", &char1, &num1, &char2, &num2);
    printf("입력한 값은 [%c] [%d] [%c] [%d] 입니다.\n", char1, num1, char2, num2);
  }

  return 0;
}
