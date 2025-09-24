#include <iostream>
#include "logic.h"

Node::Node(int value){
  this->value = value;
  this->next = nullptr;
  this->back = nullptr;
}

DoubleLL::DoubleLL(int value){
  Node * aux_node = new Node(value);
  this->head = aux_node;
  this->tail = aux_node;
  length = 1;
}

void DoubleLL::printList(){
  Node * auxNode = nullptr;
  if(this->head == nullptr){
    std::cout<<"[-] This list is empty"<< std::endl;
    return;
  }
  auxNode = this->head;
  while(auxNode!=nullptr){
    std::cout<<"Value: ["<<auxNode->value<<"]"<<std::endl;
    auxNode=auxNode->next;
  }
  std::cout<<"[+]End of the printList function"<<std::endl;
}
