#include <iostream>
using namespace std;
int main()
{
	double x,y;
	cout<<"please enter X , Y"<<endl;
	cin>>x>>y;
    double ans=x*x+y*y;
	if(ans<=10000)//radius is 100,so the square of X ,Y add together that dos'nt exceed 10000
	if(x>=0&&x<=100&&0<=y&&y<=100)
	cout<<"inside"<<endl;
	else
	cout<<"outside"<<endl;
	return 0;	
 } 
