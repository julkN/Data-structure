#include <iostream>
#include "logic.h"

int main(){
  Heap * myHeap = new Heap();
  myHeap->insert(50);
  myHeap->insert(100);
  myHeap->insert(75);
  myHeap->printHeap();
  myHeap->insert(110);
  myHeap->printHeap();
  myHeap->insert(125);
  myHeap->printHeap();
  return 0;
}
