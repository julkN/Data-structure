#include <iostream>
#include "logic.h"
#include <climits>

Node::Node(int value){
  this->value=value;
  this->next = nullptr;
}


Stack::Stack(int value){
  Node * newNode = new Node(value);
  top = newNode;
  height = 1;
}

void Stack::printStack(){
  Node * tmp = this->top;
  while(tmp){
    std::cout<<"["<<tmp->value<<"]"<<std::endl;
    tmp = tmp->next;
  }
}

Node * Stack::getTop(){
  return this->top;
}

short Stack::getHeight(){
  return this->height;
}

void Stack::push(int value){
  Node * newNode = new Node(value);
  newNode->next = this->top;
  top = newNode;
  height++;
}

int Stack::pop(){
  int aux_value = 0;
  Node * tmp = nullptr;
  if(this->top==nullptr)
    return INT_MIN;
  tmp = this->top;
  top = top->next;
  height--;  
  aux_value = tmp->value;
  delete(tmp);
  return aux_value; 
}
