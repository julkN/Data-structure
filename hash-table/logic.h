#include <iostream>
#include <vector>

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
    int hash(std::string key);
    void set(std::string key, int value);
    int get(std::string key);
    std::vector<std::string> keys();
};
