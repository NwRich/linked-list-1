#include "node.h"
#include "student.h"

node::node() {
  next = NULL;
}
node::~node() {
  delete &value;
  next = NULL;
}
void node::setValue(student* newStudent) {
  value = newStudent;
}
student* node::getValue() {
  return value;
}
void node::setNext(node* newNext) {
  next = newNext;
}
node* node::getNext() {
  return next;
}
