#include <iostream>
#include <vector>
#include "logic.h"

void HashTable::printTable(){
  for (int i =0; i<SIZE; i++){
    std::cout<<i<<":"<<std::endl;
    if(datamap[i]){
      Node * tmp = datamap[i];
       while(tmp){
        std::cout<<" { "<<tmp->key<<" , "<<tmp->value<<" } "<<std::endl;
         tmp=tmp->next;
       }
    }
  }
}

int HashTable::hash(std::string key){
  int hash = 0;
  for(int i= 0; i <key.length(); i++){
    int asciIV = (int)(key[i]);
    hash = (hash+asciIV*23)%SIZE;
  }
  return hash;
}

void HashTable::set(std::string key, int value){
  int index = hash(key);
  Node * newNode = new Node(key,value);
  if(datamap[index]){
    Node * tmp = datamap[index];
    while(tmp->next)
      tmp = tmp->next;
    tmp->next = newNode;
  }else
    datamap[index] = newNode;
}

int HashTable::get(std::string key){
  int index = hash(key);
  Node * tmp = datamap[index];
  while(tmp){
    if(tmp->key == key) return tmp->value;  
    else tmp = tmp->next;
  }
  return 0;
}

std::vector<std::string> HashTable::keys(){
  std::vector<std::string> allKeys;
  for(int i= 0; i<SIZE; i++){
    Node * tmp = datamap[i];
    while(tmp){
      allKeys.emplace_back(tmp->key);
      tmp = tmp->next;
    }  
  }
  return allKeys; 
}
