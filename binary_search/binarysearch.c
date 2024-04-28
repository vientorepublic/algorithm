#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int binsearch(int data[], int n, int key) {
  int low = 0;
  int high = n -1;
  int mid;

  while (low <= high) {
    mid = (low + high) / 2;
    printf("mid: %d\n", mid);
    if (data[mid] == key) {
      return mid;
    } else if (data[mid] > key) {
      high = mid - 1;
    } else if (data[mid] < key) {
      low = mid + 1;
    }
  }
  return -1;
}

int main() {
  int arr[7] = {25, 43, 92, 16, 35, 57, 64};
  int result = binsearch(arr, 7, 35);
  printf("%d", result);
  return 0;
}
