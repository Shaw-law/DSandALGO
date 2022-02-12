#include <stdio.h>

#define MAX 5

int Queue[MAX];
int front = -1, rear = -1;

void insert();
void delete ();
void show();

int main() {

  int choice;
  do {
    printf("\n1.Insert"
           "\n2.Delete"
           "\n3.Show"
           "\n4.Exit"
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
      printf("\nExitting now!!!\n");
      break;
    default:
      printf("\nFirst learn to read!!!");
    }
  } while (choice != 4);

  return 0;
}

void insert() {
  int data;
  printf("\nInsert The data: ");
  scanf("%d", &data);

  if (front == -1 && rear == -1) {
    front = 0;
    rear = 0;
    Queue[rear] = data;
  } else {
    rear++;
    Queue[rear] = data;
  }
  printf("\nData Inserted!!!");
}

void delete () {
  if (front == rear) {
    printf("\nNo Entry!!!");
  } else {
    front++;
  }
}

void show() {
  for (int i = front; i <= rear; ++i)
    printf("%d", Queue[i]);
  printf("\n");
}
