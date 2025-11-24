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
  std::cout<<"Queue class"<<std::endl;
  std::unique_ptr<Queue> myQueue(new Queue(11));
  myQueue->enqueue(5);
  myQueue->printQueue();
  std::cout<<myQueue->dequeue()<<std::endl;
  myQueue->printQueue();  
  return 0;
}
