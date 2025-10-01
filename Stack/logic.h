#include <iostream>

class Node{
  public:
    int value;
    Node * next;
    Node(int value);
};

class Stack{
  private:
    Node * top;
    short height;
  public:
    Stack(int value);
    void printStack();
    Node * getTop();
    short getHeight();
    void push(int value);
    int pop();
};

