#include <iostream>

using namespace std;

struct Node {
  int data;
  struct Node *next;
};

typedef struct Node *node;
node top = NULL;

void push(int val) {
  node newnode = (node)malloc(sizeof(struct Node));
  newnode->data = val;
  newnode->next = top;
  top = newnode;
}

void pop() {
  if (top == NULL) {
    cout << "Stack Underflow" << endl;
  } else {
    cout << "The popped element is " << top->data <<endl;
    top = top->next;
  }
}

void display() {
  node ptr;
  if (top == NULL)
    cout << "Stack is empty";
  else {
    ptr = top;
    cout << "Stack elements are: ";
    while (ptr != NULL) {
      cout << ptr->data << " ";
      ptr = ptr->next;
    }
  }
  cout << endl;
}

int main() {
  int ch, val;
  cout << "1) Push in Stack" <<endl;
  cout << "2) Pop from Stack" <<endl;
  cout << "3) Display Stack" <<endl;
  cout << "4) Exit" <<endl;

  do {
    cout << "Enter choice: " << endl;
    cin >> ch;

    switch(ch) {
      case 1:
        cout << "Enter the value to be pushed: " << endl;
        cin >> val;
        push(val);
        break;
      case 2:
        pop();
        break;
      case 3:
        display();
        break;
      case 4:
        cout << "Exit" <<endl;
        break;
      default:
        cout << "Invalid Choice " << endl;
    } 
  } while (ch != 4);
  return 0;
}
