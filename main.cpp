#include <iostream>
#include <malloc.h> //to use malloc function

using namespace std;

int main() {

  int i, num, *arr;

  cout << "Please enter the enter the amount of elements in the array:";
  cin >> num;

  arr = (int *)malloc(num * sizeof(int));

  cout << "\nPlease enter the element of the array:";

  for (i = 0; i < num; i++) {
    cin >> arr[i];
  }

  cout << "\nThe elements of the array are:";
  for (i = 0; i < num; i++) {
    cout << arr[i];
  }

  return 0;
}
