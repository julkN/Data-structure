#include <iostream>
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
