#include <stdio.h>
#include <stdlib.h>

////////////Node Creation//////////////////////////////////////////////

struct node {
  int data;
  struct node *prev;
  struct node *next;
};

////////////////////////change node to node/////////////////////////
typedef struct node node;

node *head = NULL;

/////////////////////////declare your function here/////////////////////////
void atBeg();
void atEnd();
void atParticular(int);
void delBeg();
void delEnd();
void delSpecific(int);
void print();

/////////////////////////Main Driver////////////////////////////
int main() {
  int choice, loc;
  do {

    printf("\t\t\t\xB1\xB1\xB1Menu\xB1\xB1\xB1\t\t\t");
    printf("\n1.At Beginnig\n2.Print\n3.At End\n4.At Specific\n5.Delete "
           "Beg\n6.Delete End\n7.Delete Specific\n8.Exit\n");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      atBeg();
      break;
    case 2:
      print();
      break;
    case 3:
      atEnd();
      break;
    case 4:
      printf("Enter the value: ");
      scanf("%d", &loc);
      atParticular(loc);
      break;
    case 5:
      delBeg();
      break;
    case 6:
      delEnd();
      break;
    case 7:
      printf("Enter the value: ");
      scanf("%d", &loc);
      delSpecific(loc);
      break;
    default:
      printf("Exitting\n");
      exit(1);
    }
  } while (choice != 8);
  return 0;
}

////////////////////////Implement at Beg function/////////////////////////
void atBeg() {

  printf("Enter the data: ");
  int data;
  node *newNode;

  scanf("%d", &data);
  newNode = (node *)malloc(sizeof(node));

  newNode->data = data;

  newNode->prev = NULL;
  newNode->next = head;
  head = newNode;
  printf("\nNode Created.\n");
}

//////////////At the end of list/////////////////////////////////////////
void atEnd() {
  node *newNode, *temp = head;
  newNode = (node *)malloc(sizeof(node));
  int data;

  printf("Enter the data: ");
  scanf("%d", &data);

  newNode->data = data;

  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = newNode;
  newNode->prev = temp;

  printf("Node Created.\n");
}

/////////// Implement  at atParticular func/////////////
void atParticular(int loc) {
  node *newNode, *temp1 = head, *temp2;
  newNode = (node *)malloc(sizeof(node));
  int data;

  printf("Please enter the data: ");
  scanf("%d", &data);

  newNode->data = data;
  while (temp1->data != loc)
    temp1 = temp1->next;
  temp2 = temp1->next;
  temp1->next = newNode;
  newNode->next = temp2;
  newNode->prev = temp1;
  temp2->prev = newNode;

  printf("Node Created.\n");
}

////////////Delete at Beginnig///////////////////////////////////
void delBeg() {
  node *temp = head;
  head = temp->next;
  head->prev = NULL;
  free(temp);
  printf("Deleted at Beginnig\n");
}

//////////////Delete at End///////////////////////////////////
void delEnd() {
  node *temp = head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->prev->next = NULL;
  free(temp);
  printf("Node Deleted at End\n");
}

void delSpecific(int value) {
  node *temp = head;
  while (temp->data != value)
    temp = temp->next;

  temp->prev->next = temp->next;
  temp->next->prev = temp->prev;
  free(temp);

  printf("Deleted the node with value %d", value);
}
////////////Implement print function//////////////////////////////////////
void print() {
  printf("In print function.\n");
  node *temp;
  temp = head;

  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}
