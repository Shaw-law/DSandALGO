#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////
#define SIZE 5
int top = -1, stackData[SIZE];

////////Functions/////////////////////////////////////////////////////
void Push();
int Pop();
void Display();

int main() {
  int choice, del, stackData[SIZE];

  do {
    printf("\t\t\t\xB1\xB1Menu\xB1\xB1\t\t\t");
    printf(
           "\n1. Push"
           "\n2. Pop"
           "\n3. Exit"
           "\n4. Display"
           "\n"
           );
    scanf("%d", &choice);
    switch (choice) {
    case 1:
      Push();
      break;
    case 2:
      del = Pop();
      printf("\nDeleted %d", del);
      break;
    case 3:
      exit(0);
      break;
    case 4:
      Display();
      break;
    default:
      printf("\nWrong Entry!!!");
      break;
    }
  } while (choice != 3);
}

////////Implement Push///////////////////////////////////////////
void Push() {
  int data;
  printf("\nEnter the data: ");
  scanf("%d", &data);

  if (top == SIZE - 1)
    printf("Overflow");
  else {
    top++;
    stackData[top] = data;
  }
}

///////////////Implement Pop//////////////////////////////////////
int Pop() {
  int save;
  if (top == -1) {
    return -1;
  } else {
    save = stackData[top];
    top--;
  }
  return save;
}

//////////////////////Display/////////////////////////////////
void Display() {
  for (int i = top; i >= 0; i--) {
    printf("%d ", stackData[i]);
  }
}
