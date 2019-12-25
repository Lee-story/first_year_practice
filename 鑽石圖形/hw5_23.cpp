#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n%2!=0){
	//determine n is odd or not
	int h=(n+1)/2;//h is diagonal value ps:(odd+1)/2
	for(int i=1;i<=h;i++)
	{
		for(int x=h-i;x>0;x--)
		{
		cout<<" ";
		}
		for(int y=1;y<=2*i-1;y++)
		{
		cout<<"*";
		}
		cout<<endl;
	}
	for(int i=h-1;i>0;i--)//when the top finished,start to run the down
	{
		for(int x=h-i;x>0;x--)
		{
		cout<<" ";
		}
		for(int y=1;y<=2*i-1;y++)
		{
		cout<<"*";
		}
		cout<<endl;
	}
}
    else
    cout<<"please enter the odd"; 
    return 0;
}
