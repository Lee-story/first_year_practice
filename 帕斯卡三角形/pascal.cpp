#include<iostream>
using namespace std;
int main()
{
	int n,y;
	int x=1;
	cout<<"please enter numbers to get Pascal triangle's Layers (ps:the number can't too large than 30)"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
	for(int a=n-i;a>0;a--){//use space and decrease progressively to create triangle 
	cout<<" ";
    }
	cout<<x<<" ";
	for(int j=1;j<=i;j++)//after 2nd will execute the loop 
	{
	y=x;
	x=y*(i-j+1)/j;
	cout<<x<<" ";
	}
	cout<<endl;
	}
	return 0;
 } 
