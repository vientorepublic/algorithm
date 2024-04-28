#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * 이분탐색
 * 
 * 정렬된 배열에서 특정 값을 찾는 알고리즘.
 * 배열의 중간을 기준으로 범위를 좁혀가기 때문에 시간복잡도를 생각했을 때 효율적이다.
*/
int binsearch(int data[], int n, int key) {
  int low = 0; // 배열의 첫 인덱스
  int high = n -1; // 배열의 마지막 인덱스
  int mid; // 중간 인덱스를 저장할 변수

  while (low <= high) { // 탐색 범위가 남아있는가?
    mid = (low + high) / 2; // 중간 인덱스를 선언한다
    printf("mid: %d\n", mid);
    if (data[mid] == key) { // 중간 인덱스가 가르키는 값이 찾고자 하는 값과 같는가?
      return mid;
    } else if (data[mid] > key) { // 찾고자 하는 값보다 큰가?
      high = mid - 1; // 탐색 범위를 오른쪽 절반으로 좁힌다
    } else if (data[mid] < key) { // 찾고자 하는 값보다 작은가?
      low = mid + 1; // 탐색 범위를 왼쪽 절반으로 좁힌다
    }
  }
  return -1; // 찾을 수 없음
}

int main() {
  int arr[7] = {25, 43, 92, 16, 35, 57, 64};
  int result = binsearch(arr, 7, 35);
  printf("%d", result);
  return 0;
}
