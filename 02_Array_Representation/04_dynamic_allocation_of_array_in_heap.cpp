//Data Structure Course
//All Codes Are Written by Krishna
//Arrays Representation
#include <iostream>
using namespace std;
int main(){
  //we can allocate memory in heap by using pointer variable
  int *ptr;
  ptr = new int[5]; // allocates memory in heap

  // assigning values
  for(int i=0;i<5;i++){
    cin >> ptr[i];
  }
  // printning elements
  for(int i=0;i<5;i++){
    cout << ptr[i] << " ";
  }
  cout << endl; //use for new line
  return 0;
}
