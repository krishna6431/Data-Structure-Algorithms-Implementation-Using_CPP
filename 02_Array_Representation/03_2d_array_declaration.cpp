//Data Structure Course
//All Codes Are Written by Krishna
//Arrays Representation
//this code is only for illustration
//this code not work
#include <iostream>
using namespace std;
int main(){
 //using array name
 int arr[3][3];

//using pointer
 int *ptr[3];
 ptr[0] = new int[3];
 ptr[0] = new int[3];
 ptr[0] = new int[3];

 //using double pointer
 int **ptr;
 ptr = new int *[3];
 ptr[0] = new int[3];
 ptr[1] = new int[3];
 ptr[2] = new int[3];

  return 0;
}
