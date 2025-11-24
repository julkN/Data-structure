#include <iostream>
#include "logic.h"
#include <climits>

Node::Node(int value){
  this->value=value;
  this->next = nullptr;
}

//Stack definition and functions
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

//End of stack definition


//Queue definition
Queue::Queue(int value){
  Node * newNode = new Node(value);
  this->first = this->last = newNode;
  height = 1;
}

void Queue::printQueue(){
  Node * tmp = this->first;
  while(tmp){
    std::cout<<"["<<tmp->value<<"]"<<std::endl;
    tmp = tmp->next;  
  }
}

void Queue::enqueue(int value){
  Node * newNode = new Node(value);
  if(first==nullptr)
    this->first= newNode;
  else{  
    last->next = newNode;
  }
  this->last = newNode;  
  height++;  
}

int Queue::dequeue(){
  if(first==nullptr) 
    return INT_MIN;
  Node * tmp = first;
  int auxValue = tmp->value;
  if(first==last)
    this->first = this->last = nullptr;
  else
    first = first->next;
  delete tmp;
  height--;
  return auxValue;  
}
//End of Queue definition


