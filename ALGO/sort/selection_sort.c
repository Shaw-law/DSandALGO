#include <stdio.h>

int main() {
  int n = 4;
  int array[n];

  // Variable to change positions
  //
  int min, loc, temp;

  for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }

  for (int i = 0; i < n; i++) {
    min = array[i];
    loc = i;
    for (int j = i + 1; j <= n; j++) {
      if (array[j] < min) {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        //min = array[j];
        //loc = j;
      }
    }
    //if (loc != i) {
    //  temp = array[i];
    //  array[i] = array[loc];
    //  array[loc] = temp;
    //}
  }
  for (int i = 0; i < n; i++)
    printf("%d ", array[i]);
  printf("\n");
}
