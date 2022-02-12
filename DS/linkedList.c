#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node *next;
} NODE;


NODE *head = NULL;

void newNode();
void print();

int main() { 

  int choice;
  printf("\nEnter Your Choice\n1.Enter Data\n2.Print");
  scanf("%d", &choice);

  if (choice == 1) {
    newNode();
  } else if (choice == 2) {
    print();
  } else {
    exit(0);
  }
  return 0; 
}

void print() {
  NODE *temp;
  temp = head;
  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
  }
}

void newNode() {
  int data3;
  NODE *newNode3;

  newNode3 = (NODE *)malloc(sizeof(NODE));
  scanf("%d", &data3);

  newNode3->data = data3;

  if (head == NULL) {
    head = newNode3;
  } else {
    newNode3->next = head;
    head = newNode3;
  }
}
