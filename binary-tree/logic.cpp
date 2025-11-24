#include <iostream>
#include "logic.h"

bool BinarySearchTree::insertNode(int value){
  Node * newNode = new Node(value);
  if(root==nullptr){
    root = newNode;
    return true;
  }
  Node * tmp = root;
  while(true){
    if(tmp->value == value){
      delete newNode;
      return false;    
    }
    if(value<tmp->value){
      if(tmp->left == nullptr){
        tmp->left = newNode;
        return true;
      }else
        tmp = tmp->left;  
    }else{
      if(tmp->right == nullptr){
        tmp->right = newNode;
        return true;
      }else
        tmp = tmp->right;
    }
  }

}

bool BinarySearchTree::contain(int value){
  Node * tmp = root;
  while(tmp){
    if(value<tmp->value)  tmp=tmp->left;
    else if(value>tmp->value)  tmp=tmp->right;
    else return true;
  }
  return false;
}
