#include <iostream>
#include <vector>

using std::vector;	
using std::cout;

class Heap{
  private:
      vector<int> heap;

      int leftChild(int index){
        return 2*index+1;
      }
      int rightChild(int index){
        return 2*index+2;    
      }
      
      int parent(int index){
        return (index-1)/2;
      }

      void swap(int index1, int index2){
        int tmp = heap[index1];
        heap[index1] = heap[index2];
        heap[index2] = tmp; 
      }
  public:
    void printHeap();
    void insert(int value);

};
