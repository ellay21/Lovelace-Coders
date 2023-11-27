#include<iostream>
#include<cmath>

 using namespace std ;
 int main(){

    double height,weight,bmi;
    char gender;

    cout << "please, Enter your gender : ";
    cin >>gender;

 	cout << "please, Enter your height in meter: ";
 	cin >> height;

 	cout << "please, Enter your weight killograme: ";
 	cin >> weight;
 	bmi = (weight/(pow(height,2)));
 	if (bmi > 30)
        {
        cout << "you have obsesity, ";
 	}
 	else if (gender == 'm'||gender == 'M'){
        if(bmi < 18.5){
        cout << "you are underweight, ";

        }
        else if(bmi>= 18.5 && bmi <= 24.9){
           cout << "you have normal weight, ";
            }
        else if(bmi>= 25 && bmi <= 29.9){
           cout << "you are overweight, ";
            }

 	}
 	else if (gender == 'f'||gender == 'F'){
        if(bmi < 20.5){
        cout << "you are underweight, ";

        }
        else if(bmi>= 20.5 && bmi <= 25.9){
           cout << "you have normal weight, ";
            }
        else if(bmi>= 26 && bmi <= 29.9){
           cout << "you are overweight, ";
            }

 	}


 	return 0 ;
 	}
