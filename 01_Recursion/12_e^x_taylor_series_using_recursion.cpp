//Data Structure Course 
//All Codes Are Written by Krishna
//Recursion 
#include<iostream>
using namespace std;

// e^x=1 + x/1 + x^2/2! + x^3/3!..........
// time complexity =o(n2)
int e_t_series(int x,int n){
	static int p=1,f=1;
	int r;
	if(n==0) return 1;
	else{
		r=e_t_series(x,n-1);
		p=p*x;
		f=f*n;
		return(r+(p/f));
	}
}
// efficient solution 
// time complexity ---> o(n)
int e_t_series_eff(int x,int n){
	static int s=1;
	if(n==0) return s;
	s=1+x/n*s;
	return e_t_series_eff(x,n-1);

}

// using loop
// time complexity----> o(n2)
int e_t_series_itr(int x,int n){
	int s=1;
	for(;n>0;n--){
		s=1+x/n*s;
	}
	return s;
}

int main(){
	cout << e_t_series(4,4) <<endl;
	cout << e_t_series_eff(4,4) <<endl;
	cout << e_t_series_itr(4,4) << endl;
	return 0;
}