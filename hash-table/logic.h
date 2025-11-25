#include <iostream>


class Node{
  public:
    std::string key;
    int value;
    Node * next;
    Node(std::string key, int value){
      this->value = value;
      this->key = key;
      this->next = nullptr;    
    }
};

class HashTable{
  private:
    static const int SIZE = 7;
    Node *datamap[SIZE];
  public:
    void printTable();
};
