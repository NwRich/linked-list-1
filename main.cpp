/*Nicholas Rich
12/5/2017
a proof of concept that the linked list works
*/
#include "node.h"
#include "student.h"

using namespace std;
void add(student* newStudent);
void print(node* next);
node* head;
int main() {
  student* n = new student(123);
  add(n);
  n = new student(321);
  add(n);
  print(head);
  return 0;
}

void add(student* newStudent) {
  node* current = head;
  if (current == NULL) {
    head = new node();
    head->setValue(newStudent);
  }
  else {
    while (current->getNext() != NULL) {
      current = current->getNext();
    }
    current->setNext(new node());
    current->getNext()->setValue(newStudent);
  }
}

void print (node* next) {
  if (next == head) {
    cout << "list ";
  }
  if (next != NULL) {
    cout << next->getValue()->getId() << " ";
    print(next->getNext());
  }
}
