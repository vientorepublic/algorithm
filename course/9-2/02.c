#include <stdio.h>

int sum_scores(int n_lecture) {
  int sum, score;
  sum = 0;
  for (int j = 1; j <= n_lecture; j++) {
    printf("과목%d 점수 = ", j);
    scanf("%d", &score);
    sum += score;
  }
  return sum;
}

void print_result(int total, double average) {
  printf("총점 = %d\n", total);
  printf("평균 = %.2f\n", average);
}

int main(void) {
  int n_lecture = 3, n_student = 2;
  int total;
  double average;
  for (int i = 1; i <= n_student; i++) {
    total = sum_scores(n_lecture);
    average = total / n_lecture;
    print_result(total, average);
  }
  return 0;
}
