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
// Binary Search
// time complexity ----> o(log(n))
int binary_search(struct Array arr, int key)
{
  int low, high, mid;
  low = 0;
  high = arr.length - 1;
  while (low <= high)
  {
    mid = low + high / 2;
    if (key == arr.A[mid])
    {
      return mid;
    }
    else if (key < arr.A[mid])
    {
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }
  return -1;
}

int main()
{
  struct Array arr = {{1, 2, 3, 4, 5}, 20, 5};
  cout << "Element index :  " << binary_search(arr, 3) << endl;
  cout << "Element index :  " << binary_search(arr, 7) << endl;
  return 0;
}
