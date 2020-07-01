//Data Structure Course 
//All Codes Are Written by Krishna
//Recursion 
//this program return the sum of natural no till n
#include<iostream>
using namespace std;
//using recursion 
//time complexity--> o(n)
int sum_of_nat_rec(int n){
	if(n==0)
		return 0;
	else
		return sum_of_nat_rec(n-1)+n;
}
// using iterative approach
//time complexity---> o(n)
int sum_of_nat_itr(int n){
	int sum=0;
	for (int i = 1; i <= n; ++i)
	{
		sum+=i;
	}
	return sum;
}

// using direct formula
// time complexity---> o(1)
int sum_of_nat_direct(int n){
	return n*(n+1)/2;
}	

int main(){
	int x=100;
	cout << sum_of_nat_rec(x) << endl;
	cout << sum_of_nat_itr(x) << endl;
	cout << sum_of_nat_direct(x);	
	cout << endl;
	return 0;
}

