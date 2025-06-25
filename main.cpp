#include <iostream>
#include "person.h"

int stack[100];
int sp = 0;

void push(int value) {
  stack[sp++] = value;
}

void pop() {
  stack[sp--];
}

int main() {

}

