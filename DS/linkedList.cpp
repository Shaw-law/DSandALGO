#include <iostream>

using namespace std;

// A linked list node
class Node {
public:
  int data;
  Node *next;
};

void push(Node **head_href, int new_data) {
  Node *new_node = new Node();

  new_node->data = new_data;
  new_node->next = (*head_href);

  (*head_href) = new_node;
}

void insertAfter(Node *prev_node, int new_data) {

  if (prev_node == NULL) {
    cout << "Previous data is NULL" << endl;
  }

  Node* new_node = new Node();

  new_node->data = new_data;

  new_node->next = prev_node->next;
  prev_node->next = new_node;
}

void append(Node** head_href, int new_data) {
  Node *new_node = new Node();

  Node *last = *head_href;

  new_node->data = new_data;
  new_node->next = NULL;

  if(*head_href == NULL) {
    *head_href = new_node;
    return;
  }

  while (last->next != NULL) {
    last = last->next;
  }

  last->next = new_node;
  return;
}

void printList(Node *node) {
  while(node != NULL) {
    cout<<" "<<node->data<<endl;
    node = node->next;
  }
}

int main() {
  Node* head = NULL;
  append(&head, 6);
  push(&head, 7);
  append(&head, 4);
  insertAfter(head->next, 8);

  cout<<"Created Linked list is: "<<endl;
  printList(head);

  return 0;
}
