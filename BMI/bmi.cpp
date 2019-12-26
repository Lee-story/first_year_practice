#include<iostream>
using namespace std;
int main()
{
	float height=0;
    cout<<"Count BMI\n";
    cout<<"Please enter your height "; // first number to add
	cin>>height;
	float weight=0;
	cout<<"Please enter your weight "; // second number to add
	cin>>weight;
	float BMI=0;
	BMI=weight*703/(height*height); // use number1 and number2 to sum the BMI
	cout<<"your BMI is "<<BMI<<"¡C\n";
	
	cout<<"BMI VALUES\n";
    cout<<"underweight:less than 18.5\n";
	cout<<"Normal: between 18.5 and 24.9\n";
	cout<<"Overweight:between 25.9 and 29.9\n";
	cout<<"Obese: 30 or greate\n";
	return 0 ; // indicate that program ended sucessfully
} // end function main
