#include <iostream>

class Node{
  public:
    int value;
    Node * next;
    Node * back;    
    Node(int value);  
};

class DoubleLL{
  private:
    Node * head;
    Node * tail;
    short length;
  public:
    DoubleLL(int value);
    void printList();
    int getHead();
    int getTail();
    int getLength();
    void append(int value);
};
