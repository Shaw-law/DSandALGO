#include <iostream>

using namespace std;

struct Node {
  int data;
  struct Node *next, *prev;
};

typedef struct Node* node;

void insert(int data, node ptr) {
  ptr = (node)malloc(sizeof(Node));
}
int main() {
  node ptr, HEAD;

  insert(4,&HEAD);
}
