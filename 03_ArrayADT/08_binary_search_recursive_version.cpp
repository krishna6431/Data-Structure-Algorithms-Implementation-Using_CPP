//Data Structure Course
//All Codes Are Written by Krishna
//Arrays ADT(abstract data type)

#include <iostream>
using namespace std;
#define len(x) *(&x + 1) - x

struct Array
{
  int A[20];
  int size;
  int length;
};
// Binary Search recursive version 
// it is always better to use loop then tail recursion
// time complexity ----> o(log(n))
int recursive_binary_search(struct Array arr,int low , int high ,int key)
{ int mid;
  if(low <= high ){
      mid=low+high/2;
      if(key== arr.A[mid]){
          return mid;
      }
      else if (key <= arr.A[mid]){
          recursive_binary_search(arr,low,mid-1,key);
      }
      else{
          recursive_binary_search(arr,mid+1,high,key);
      }

  }
  return -1;
}

int main()
{
  struct Array arr = {{1, 2, 3, 4, 5}, 20, 5};
  cout << "Element index :  " << recursive_binary_search(arr,0,4, 3) << endl;
  cout << "Element index :  " << recursive_binary_search(arr,0,4, 7) << endl;
  return 0;
}
