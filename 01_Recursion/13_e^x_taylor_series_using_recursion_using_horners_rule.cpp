//Data Structure Course 
//All Codes Are Written by Krishna
//Recursion 
#include<iostream>
using namespace std;

// e^x=1 + x/1 + x^2/2! + x^3/3!..........

// efficient solution using horners rule
// time complexity ---> o(n)
int e_t_series_eff(int x,int n){
	static int s=1;
	if(n==0) return s;
	s=1+x/n*s;
	return e_t_series_eff(x,n-1);

}

int main(){
	cout << e_t_series_eff(4,4) <<endl;	
	return 0;
}