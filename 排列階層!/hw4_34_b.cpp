#include<iostream>
using namespace std;
int main()
{
    int n;
    int ans=1; 
	int x=1;
    double e;
	cout<<"please enter a number to get the formula:e=1+1/1!+...1/n!"<<endl;
    cin>>n;
    while(x<=n)
    {
		ans*=x;
		e=(double)1/ans;
		//n=x,x will turn large ex:1.2.3.....=n ,so 1/n*(n-1)...1 
		x++;
        e+=1;
}		
	cout<<"e="<<e<<endl;
	return 0;
}
