#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Detect numbers which can divisible by 3"<<endl;
	cout<<"please enter a number"<<endl;
	cin>>num;	
	//according remainder of number to determine it is multiple of three or not
	if(num%3==0)
	cout<<"your number is one of multiple of three";	
	else
	cout<<"your number is not one of multiple of three";
	return 0;
 } 
