#include <iostream>

class Node{
  public:
    Node * left;
    Node * right;
    int value;
    Node(int value){
      this->value = value;
    }
};

class BinarySearchTree{
  public:
    Node * root;
    BinarySearchTree(){
      root = nullptr;
    }
    bool insertNode(int value);
    bool contain(int value);

};
