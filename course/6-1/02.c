#include <stdio.h>

// 18, 20, 65, 그 외의 값 네가지 경우로만
// 구분한다고 가정하고 switch문으로 바꿔보자.

int main() {
  int age;
  printf("나이를 입력하세요 >> ");
  scanf("%d", &age);
  switch (age) {
    case 18:
      printf("청소년입니다.\n");
      break;
    case 20:
      printf("성인입니다.\n");
      break;
    case 65:
      printf("노인입니다.\n");
      break;
    default:
      printf("모르겠습니다.\n");
  }
  return 0;
}
