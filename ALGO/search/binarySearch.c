#include <stdio.h>

int main() {
  int array[5], key, flag = 1, mid;

  for (int i = 0; i < 5; i++)
    scanf("%d", &array[i]);

  printf("Enter the data you want to search: ");
  scanf("%d", &key);

  int loc = 0, beg = 0, end = 5 - 1;
  while (beg <= end && key != array[mid]) {
    mid = (beg + end) / 2;
    if (key == array[mid]) {
      printf("Search is successful\n");
      loc = mid;
      printf("Item at %d\n", loc + 1);
      flag = 0;
    } else if (key < array[mid]){
      end = mid - 1;
    } else {
      beg = mid + 1;
    }
  }
  if (flag == 1)
    printf("Item not found!!!\n");
}
