#include <stdio.h>
#include "math_utils.h"

int main() {
    int a = 10, b = 5;
    int sum = add(a, b);
    int difference = subtract(a, b);
    int product = multiply(a, b);
    float quotient = divide(a, b);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient);

    Point p1 = {3, 4};
    printf("Point coordinates: (%d, %d)\n", p1.x, p1.y);
    printf("PI: %e\n", PI);

    int num = 5;
    int *num_ptr = &num;
    printf("Pointer for num: %d\n", *num_ptr);
    printf("Memory address for num pointer: %p\n", &num_ptr);

    return 0;
}
