#include <iostream>
#include "logic.h"

using std::endl;
using std::cout;

void Heap::printHeap(){
  cout<<endl;
  cout<<"[";
  for(int i=0; i<heap.size(); i++){
    cout<<heap[i];
    if(i<heap.size()-1)
      cout<<",";
  }
  cout<<"]";

}

void Heap::insert(int value){
  heap.push_back(value);
  int index = heap.size()-1;
  while(index>0 && heap[index]>heap[parent(index)]){
    this->swap(index,parent(index));
    index = parent(index);
  }
}
