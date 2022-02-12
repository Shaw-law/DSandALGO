#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////
#define SIZE 5
int front = -1, rear = -1, queueData[SIZE];

//////////////////////////////////////////////////////////////////////////////
void insert();
void delete ();
void show();

//////////Main Driver/////////////////////////////////////////////////////////
int main() {
  int choice;

  do {
    printf("\t\t\t\xB1\xB1\xB1Menu\xB1\xB1\xB1\t\t\t");
    printf("\n1. Insert"
           "\n2. Delete"
           "\n3. Show"
           "\n4. Exit"
           "\n");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      insert();
      break;
    case 2:
      delete ();
      break;
    case 3:
      show();
      break;
    case 4:
      printf("\nExitting Now\n");
      break;
    default:
      printf("Wrong Entry!!!\n");
      break;
    }

  } while (choice != 4);
  return 0;
}

///////////////////////////////////////////////////////////////////////////////////
void insert() {
  int data;

  printf("Enter the data: ");
  scanf("%d", &data);

  if (rear == SIZE - 1)
    printf("OverFlow");
  else if (front == -1 && rear == -1) {
    front = 0, rear = 0;
  } else {
    rear++;
  }
  queueData[rear] = data;
  printf("\nValue Added\n");
}

/////////////////////////////////////////////////////////////////////////////////
void delete () {
  int save;

  if (front == -1 || front > rear) {
    printf("Underflow");
    return;
  } else {
    save = queueData[front];
    if (front == rear) {
      front = -1;
      rear = -1;
    } else {
      front = front + 1;
    }
  }

  printf ("\n %d deleted\n", save);
}

////////////////////////////////////////////////////////////////////////////////
void show() {
  if (rear == -1)
    printf("\nQueue is empty!!!\n");
  else {
    for (int i = front; i <= rear; i++)
      printf("%d ", queueData[i]);
  }
}
