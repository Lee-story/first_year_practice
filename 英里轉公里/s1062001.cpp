#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
cout<<"miles turn to kilometers\n";
cout<<"please enter miles ";
int number1=0;
cin>>number1;
double number2=0; 
number2=number1*1.6;
cout<<"kilometers are "<<fixed<<setprecision(1)<<number2<<endl;
return 0;	
 } 
