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

int DoubleLL::getHead(){
  int aux_value = 0;
  if(this->head==nullptr){
    std::cout<<"[-] The list is empty"<<std::endl;
    return -1;
  }else{
    aux_value=this->head->value;
    return aux_value;
  }
}  

int DoubleLL::getTail(){
  int aux_value = 0;
  if(this->tail==nullptr){
    std::cout<<"[-] The tail is nullptr"<<std::endl;
    return -1;
  }else{
    aux_value = this->tail->value;
    return aux_value;
  }  
}

int DoubleLL::getLength(){
  return this->length;
}  

void DoubleLL::append(int value){
  Node * newNode = new Node(value);
  if(this->head==nullptr){
    head = newNode;
    tail = newNode;
  }else{
    tail->next = newNode;
    newNode->back = tail;
    tail = newNode;
  }
  length++;
}  

void DoubleLL::deleteLast(){
  Node * auxNode = nullptr;
  if(this->head==nullptr)
    std::cout<<"[-] There is no elements to delete"<< std::endl;
  else if(this->head==this->tail){
    auxNode = head;
    head = nullptr;
    tail = nullptr;
    delete(auxNode);
    length = 0;
  }else{
    auxNode = tail;
    tail = tail->back;
    tail->next = nullptr;
    length--;
    delete(auxNode);
  }   
}

void DoubleLL::prepend(int value){
  Node * newNode = new Node(value);
  if(this->head==nullptr){
    this->head = newNode;
    this->tail = newNode;
  }else{
    newNode->next = head;
    head->back = newNode;
    head = newNode;
 }
 length++;
} 

void DoubleLL::deleteFirst(){ 
  if(this->head==nullptr){
    std::cout<<"[-]The list is empty"<<std::endl;
    return;
  }
  Node * tmp = this->head;
  if(this->head==this->tail){
    this->head = nullptr;
    this->tail = nullptr;
  }else
    this->head = this->head->next;
  delete(tmp);
  length;
}
