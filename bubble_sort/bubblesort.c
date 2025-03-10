#include <stdio.h>
#define MAX_SIZE 5

// 오름차순 버블정렬
void bubble_sort(int list[], int n){
  int temp;
  for(int i = n - 1; i > 0; i--){
    for(int j = 0; j < i; j++){
      // 반복은 배열의 길이*2
      // 이중 반복문은 한번 검사한 원소를 다시 검사하기 위함
      if(list[j] > list[j+1]){
        temp = list[j];
        list[j] = list[j+1];
        list[j+1] = temp;
      }
    }
  }
}

int main(){
  int data[MAX_SIZE] = {7, 4, 5, 1, 3};

  bubble_sort(data, MAX_SIZE);

  for(int i = 0; i < MAX_SIZE; i++){
    printf("%d ", data[i]);
  }
}
