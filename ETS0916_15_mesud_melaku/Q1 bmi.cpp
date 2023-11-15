#include<iostream>
#include<cmath>
 
 using namespace std ;
int main(){
  double height,weight,bmi;
 	cout<<"please, Enter your height in meter: ";
 	cin>>height;
 	cout<<"please, Enter your weight killogram: ";
 	cin>> weight;
 	bmi = (weight/(pow(height,2)));
 	cout<<"Dear user your Body mass weight is "<<bmi <<" kg/m^2." ;
 	
 	return 0 ;
 }
