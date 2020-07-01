//Data Structure Course 
//All Codes Are Written by Krishna
//Recursion 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// recursive method using memoization
//time complexity ----> o(n)
int fib_mem[11];
int fibo_rec_mem(int n){
	if(n<=1){
		fib_mem[n]=n;
		return n;
	}
	else{
		if(fib_mem[n-2]==-1){
			fib_mem[n-2]=fibo_rec_mem(n-2);
		}
		if(fib_mem[n-1]==-1){
			fib_mem[n-1]=fibo_rec_mem(n-1);
		}
	}
	return fib_mem[n-2]+fib_mem[n-1];
}	
int main(){
    memset(fib_mem,-1,sizeof(fib_mem));
	cout << fibo_rec_mem(3) << endl;
	return 0;
}
