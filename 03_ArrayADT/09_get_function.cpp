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
// get a element of array
// time complexity ----> o(1)
int get(struct Array arr, int index){
    if (index >=0 and index <=arr.length-1){
        return arr.A[index];
    }
    return -1;

}

int main()
{
  struct Array arr = {{1, 2, 3, 4, 5}, 20, 5};
  cout << "Element is :  " << get(arr,3) << endl;
  cout << "Element is :  " << get(arr,5) << endl;
  return 0;
}
