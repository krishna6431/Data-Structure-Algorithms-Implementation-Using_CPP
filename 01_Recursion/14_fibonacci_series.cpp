//Data Structure Course 
//All Codes Are Written by Krishna
//Recursion 
#include<iostream>
using namespace std;

// recursive method
//time complexity ----> o(2^n)
int fibo_rec(int n){
	if(n<=1) return 1;
	else return fibo_rec(n-2)+fibo_rec(n-1);
}
// using iterative approach
// time complexity ---> o(n)
int fibo_itr(int n){
	int t0=1,t1=1,n_t;
	if(n<=1) return n;
	for(int i=2;i<=n;i++){
		n_t=t0+t1;
		t0=t1;
		t1=n_t;
	}
	return n_t;
}
int main(){
	cout << fibo_rec(11) << endl;
	cout << fibo_itr(11) << endl;
	return 0;
}
