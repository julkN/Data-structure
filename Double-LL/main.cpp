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
  std::cout<<"Invoque get function"<<std::endl;
  if(ddll->get(2))
    std::cout<<ddll->get(2)->value<<std::endl;
  ddll->set(0,99);
  ddll->printList();
  return 0;
}
