//Data Structure Course 
//All Codes Are Written by Krishna
//Recursion 
#include<iostream>
using namespace std;

// nCr using Recursion using pascals triangle
int nCr_pascal(int n,int r){
	if((r==0)||(n==r)) 
		return 1;
	else 
		return (nCr_pascal(n-1,r-1) + nCr_pascal(n-1,r));	
}

int main(){
	cout << nCr_pascal(4,2) << endl;
	return 0;
}
