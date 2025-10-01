#include <iostream>
#include "logic.h"
#include <memory>

int main(){
  std::unique_ptr<Stack> myStack(new Stack(9));
  std::cout<<"stack class"<<std::endl;
  myStack->printStack();
  myStack->push(5);
  myStack->printStack();
  std::cout<<"The pop value is: ["<<myStack->pop()<<"]"<<std::endl;
  myStack->printStack();
  return 0;
}
