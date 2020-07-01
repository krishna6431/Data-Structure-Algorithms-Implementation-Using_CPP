//Data Structure Course
//All Codes Are Written by Krishna
//Arrays Representation
#include <iostream>
using namespace std;
int main(){
  //we can allocate memory in heap by using pointer variable

  int *ptr = new int[5]; // allocates memory in heap

  int *ptr1=new int[10]; //create memory block in heap of size 10
  // assigning values
  for(int i=0;i<5;i++){
    cin >> ptr[i];
  }

  //copy element of ptr[i]---->ptr1[i]
  for(int i=0;i<5;i++){
    ptr1[i]=ptr[i];
  }

  delete []ptr; //deallocate unused memory
  ptr=ptr1;
  // make ptr1 ---> null
  ptr1=NULL;

  for(int i=0;i<10;i++){
    cout << ptr+i << " " << ptr[i] << endl;
  }
  cout << endl; //use for new line
  return 0;
}
