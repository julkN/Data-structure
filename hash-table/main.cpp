#include <iostream>
#include <vector>
#include "logic.h"

int main(){
  HashTable * myHT = new HashTable();
  std::vector<std::string> myVector;
  myHT->set("tarta",5);
  myHT->set("casa",9);
  myHT->set("avenida",11);
  myHT->printTable();
  std::cout<<myHT->get("casa")<<std::endl;
  std::cout<<myHT->get("tarta")<<std::endl;
  myVector = myHT->keys();
  for(std::string st : myVector)
    std::cout<<st<<" ";
  return 0;
}
