#include <iostream>
#include <memory>
#include "logic.h"

int main(){
  std::unique_ptr<DoubleLL> ddll(new DoubleLL(5));
  ddll->append(7);
  ddll->printList();
  return 0;
}
