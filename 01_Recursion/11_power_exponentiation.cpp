//Data Structure Course 
//All Codes Are Written by Krishna
//Recursion 
//this program return the (m)^n
#include<iostream>
using namespace std;
//power exponentiation using recursion
int pow_rec(int m,int n){
	if(n==0)
		return 1;
	else
		return m*pow_rec(m,n-1);	
}
//efficient power exponention solution using recursion
int pow_rec_eff(int m ,int n){
	if(n==0)
		return 1;
	if(n%2==0)
		return pow_rec_eff(m*m,n/2);
	else
		return m*pow_rec_eff(m*m,(n-1)/2);
}
// power exponentiation using iterative approach
int pow_itr(int m,int n){
	int res=1;
	for (int i = 1; i <= n ; i++)
	{
		res*=m;
	}
	return res;
}

int main(){
	cout << pow_rec(2,9) << endl;
	cout << pow_rec_eff(2,9) << endl;
	cout << pow_itr(2,9) << endl;
	return 0;
}
