#include<iostream>
#include<cmath>
 
 using namespace std ;
 int main(){
 	double x,y,result;
 	cout<<"please, Enter the base of the function: ";
 	cin>> x;
 	cout<<"please, Enter the exponent: ";
 	cin>> y;
 	result = pow(x,y);
 	cout<<"The reult is "<<result<<"." ;
 	
 	return 0 ;
}
