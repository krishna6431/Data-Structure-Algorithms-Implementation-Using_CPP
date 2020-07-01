//Data Structure Course 
//All Codes Are Written by Krishna
//Recursion 
//this program return the factorial of a number
#include<iostream>
using namespace std;
//factorial using recursion
// time complexity---> o(n)
int fact_rec(int n){
	if(n<0){
		cout << " Oops!! Enter Positive Number Only " ; 
		return 0;
	}
	if(n==0)
		return 1;
	else
		return fact_rec(n-1)*n;	
}
// factorial using iterative approach
// time complexity--->o(n)
int fact_itr(int n){
	int res=1;
	for (int i = 1; i <= n; i++)
	{
		res*=i;
	}
	return res;
}

int main(){
	int x=10;
	cout << fact_rec(x) << endl;
	cout << fact_itr(x) << endl;
	return 0;
}
