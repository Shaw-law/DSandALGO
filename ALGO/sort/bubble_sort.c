#include <stdio.h>

int main() {
  int num = 5, array[num];

  // swap int variables
  int i, j, temp;

  for (i = 0; i < num; i++)
    scanf("%d", &array[i]);

  for (i = 0; i < num - 1; ++i) {
    for (j = 0; j < num - i - 1; ++j) {
      if (array[j] > array[j + 1]) {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
  for (i = 0; i < num; i++)
    printf("%d ", array[i]);
  printf("\n");
}
