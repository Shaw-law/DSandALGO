#include <stdio.h>

int main() {
  int array[] = {4, 6, 2, 1};
  int temp;

  int size = sizeof(array)/array[0];

  for (int i = 0; i < size; i++)
    for (int j = 0; j < size - i; j++) {
      if (array[j] > array[j + 1]) {
        temp = array[j + 1];
        array[j + 1] = array[j];
        array[j] = temp;
      }
    }

  for (int i = 0; i <= size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
  return 0;
}
