#include <iostream>
#include <iterator>

using namespace std;

struct Node {
  int data;
  struct Node *prev;
  struct Node *next;
};

typedef struct Node *node;

void push(Node **head_href, int new_data) {
  node new_node = (node)malloc(sizeof(Node));

  new_node->data = new_data;

  new_node->next = *head_href;
  new_node->prev = NULL;

  if ((*head_href) != NULL)
    (*head_href)->prev = new_node;

  (*head_href) = new_node;
}

void insertBefore(node* head_href, node next_node, int new_data) {
  if(next_node == NULL) {
    cout<<"The given node cannot be NULL";
    return;
  }

  node new_node = (node)malloc(sizeof(Node));

  new_node->data = new_data;

  new_node->prev = next_node->prev;
  next_node->prev = new_node;
  new_node->next = next_node;

  if(new_node->prev != NULL) {
    new_node->prev->next = new_node;
  } else {
    (*head_href) = new_node;
  }
}

void printList(node leonardo) {
  node last;
  cout << "Transversal in forward direction";

  while (leonardo != NULL) {
    cout <<"  "<< leonardo->data;
    last = leonardo;
    leonardo = leonardo->next;
  }
}

int main() {
  node head = NULL;

  push(&head, 7);
  push(&head, 1);
  push(&head, 4);

  insertBefore(&head, head->next, 8);

  cout << "created DLL is :";
  printList(head);

  getchar();
  return 0;
}
