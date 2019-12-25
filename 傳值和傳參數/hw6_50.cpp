#include<iostream>
using namespace std;
int fun(int ans);
int main()
{ 
int n;
cout<<"enter a number"<<endl;
cin>>n;
cout<<"the number's triple is: "<<fun(n)<<endl;
}
int fun(int ans)//call by value 
{
	ans*=3;
	return ans;
}
int fun(int &ans)//call by reference
{
	ans*=3;
	return ans;
}
