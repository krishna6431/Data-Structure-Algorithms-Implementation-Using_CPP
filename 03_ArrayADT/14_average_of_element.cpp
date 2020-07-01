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
//function for displaying element of array
// time complexity----> o(n)
void display(struct Array arr){
  cout << "Elements are : " ;
  for(int i=0; i<arr.length;i++){
    cout << arr.A[i] << " ";
  }
  cout << endl;
}
// sum of  elements of array
// time complexity ----> o(1)
int add(struct Array arr){
    int total=0;
    for(int i =0 ; i < arr.length ; i++){
        total+=arr.A[i];
    }
    return total;

}
// average function to calculate the average of array
double avg(struct Array arr){
    int s=add(arr);
    return s/arr.length;
}
int main()
{
  struct Array arr = {{1, 2, 3, 4, 5}, 20, 5};
  display(arr);
  cout << "Average is : " << avg(arr) << endl;;
  return 0;
}
