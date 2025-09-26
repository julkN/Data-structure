#include <iostream>
#include <memory>
#include "logic.h"

int main(){
  std::unique_ptr<DoubleLL> ddll(new DoubleLL(5));
  ddll->append(7);
  ddll->append(9);
  ddll->append(100);
  ddll->printList();
  ddll->deleteLast();
  ddll->printList();
  ddll->prepend(101);
  ddll->printList();
  ddll->deleteFirst();
  ddll->printList();
  return 0;
}
