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
    this->head->back = nullptr;
  delete(tmp);
  length--;
}

Node * DoubleLL::get(short position){
  Node * tmp = nullptr;
  if(this->head==nullptr)
    std::cout<<"[-]The list is empty"<<std::endl; 
  else if(position>=length || position<0)
    std::cout<<"[-]Out of range"<<std::endl;
  else{  
    if(position>length/2){
     tmp = this->head;
      for(size_t i = 0;i<position; i++)
        tmp=tmp->next;  
    }else{
      tmp=this->tail;
      for(size_t i = length-1; i>position;i--)
        tmp=tmp->back;  
    }
  }
  return tmp;
}

bool DoubleLL::set(short index, int value){
  Node * tmp = this->get(index);
  if(tmp){
    tmp->value= value;
    return true;
  }else
    std::cout<<"It could not possible modify the node"<<std::endl;
  return false;
}


bool DoubleLL::insert(short index, int value){
  if(index>this->length||this->length<0){
      std::cout<<"[-]It is not possible to insert this element"<<std::endl;
      return false;
  }
  Node * newNode = new Node(value);
  Node * tmp1 = nullptr;
  Node * tmp2 = nullptr;
  if(index==0){
    prepend(value);
    return true;
  }else if(index == this->length){
    append(value);  
    return true;
  }
  tmp1 = this->get(index);
  tmp2 = tmp1;
  tmp1 = tmp1->back;
  tmp1->next=newNode;
  newNode->back = tmp1;
  newNode->next=tmp2;
  tmp2->back = newNode;
  length++;
  return true;
}

bool DoubleLL::deleteNode(short index){
  if(index < 0 || index>this->length){
    std::cout<<"[-]The index is not a valid value"<<std::endl;
    return false;
  }
  if(index==0){
    deleteFirst();
    return true;
  }
  if(index==length){
    deleteLast();
    return true;
  }
  Node * tmp = this->get(index);
  Node * tmpAfter = tmp->next;
  Node * tmpPrev =  tmp->back;
  tmpPrev->next = tmpAfter;
  tmpAfter->back = tmpPrev;
  this->length--;
  delete(tmp);
  return true;
}




