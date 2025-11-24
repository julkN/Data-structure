#include <iostream>
#include "logic.h"

int main(){
  BinarySearchTree * MyBinarySearchTree = new BinarySearchTree();
  int Value = 15;
  MyBinarySearchTree->insertNode(15);
  MyBinarySearchTree->insertNode(30);
  MyBinarySearchTree->insertNode(21);
  MyBinarySearchTree->insertNode(82);
  std::cout<<"Node :"<<Value<<std::endl;
  MyBinarySearchTree->contain(Value)?std::cout<<"Exist the node"<<std::endl:std::cout<<"The node does not exist"<<std::endl;
  Value =17;
  std::cout<<"Node :"<<Value<<std::endl;
  MyBinarySearchTree->contain(Value)?std::cout<<"Exist the node"<<std::endl:std::cout<<"The node does not exist"<<std::endl;
  return 0;
}
