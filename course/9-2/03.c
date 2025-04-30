#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int get_input(char *buffer);
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float divide(int a, int b);

int add(int a, int b) { return a + b; }

int sub(int a, int b) { return a - b; }

int mul(int a, int b) { return a * b; }

float divide(int a, int b) {
  if (b == 0) {
    printf("Error: Division by zero\n");
    return 0.0;
  }
  return (float)a / b;
}

int get_input(char *buffer) {
  printf("Enter a number: ");
  if (scanf("%s", buffer) != 1) {
    printf("Error: Invalid input\n");
    return -1;
  }
  for (int i = 0; buffer[i] != '\0'; i++) {
    if (!isdigit(buffer[i]) && buffer[i] != '-') {
      printf("Error: Input must be a number\n");
      return -1;
    }
  }
  return 0;
}

int main() {
  int a, b;
  char buffer[100];

  if (get_input(buffer) == -1) return 1;
  a = atoi(buffer);

  if (get_input(buffer) == -1) return 1;
  b = atoi(buffer);

  char operator;
  printf("Enter an operator (+, -, *, /): ");
  scanf(" %c", &operator);

  switch (operator) {
    case '+':
      printf("%d + %d = %d\n", a, b, add(a, b));
      break;
    case '-':
      printf("%d - %d = %d\n", a, b, sub(a, b));
      break;
    case '*':
      printf("%d * %d = %d\n", a, b, mul(a, b));
      break;
    case '/':
      printf("%d / %d = %.2f\n", a, b, divide(a, b));
      break;
    default:
      printf("Invalid operator\n");
  }
  return 0;
}