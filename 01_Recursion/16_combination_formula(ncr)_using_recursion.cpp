//Data Structure Course 
//All Codes Are Written by Krishna
//Recursion 
#include<iostream>
using namespace std;
//function for calculating factorial
int fact(int n){
	if(n==0) return 1;
	else return fact(n-1)*n;
}

// nCr using Recursion
// time complexity----->o(N)
int nCr(int n,int r){
	int t1,t2,t3;
	t1=fact(n);
	t2=fact(r);
	t3=fact(n-r);
	return t1/(t2*t3);
}
int main(){
	cout << nCr(4,2) << endl;
	return 0;
}
