#include <stdio.h>

int array[5];

int main() {
  int key, flag = 1;

  for (int i = 0; i < 5; i++)
    scanf("%d", &array[i]);

  printf("\nEnter the number you want to searc: ");
  scanf("%d", &key);
  for (int i = 0; i < 5; i++) {
    if (array[i] == key) {
      printf("\nFound at %d\n", i + 1);
      flag = 0;
    }
  }

  if (flag == 1)
    printf("\nItem not found!!!\n");
}
