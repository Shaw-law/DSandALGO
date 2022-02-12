#include <stdio.h>

int main() {
  int array[] = {5, 4, 3, 2, 1};
  int min, temp;

  int size = sizeof(array)/array[0];
  //printf("%d", size);
  //
  for (int i = 0; i <= size; i++) {
    min = array[i];
    for (int j = i + 1; j <= size; j++) {
      if (array[j] < min) {
        temp = array[j];
        array[j] = array[i];
        array[i] = temp;
      }
    }
  }

  for (int i = 0; i <= size; i++)
    printf("%d ", array[i]);
  printf("\n");
}
