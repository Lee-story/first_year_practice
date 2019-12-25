#include<iostream>
using namespace std;
int main()
{
    int n;
    int ans=1; 
	int x=1;
	cout<<"please enter a number to get it's factorial"<<endl;
    cin>>n;
    while(x<=n)
    {
        ans=ans*x;//n=x,x will turn large ex:1.2.3.....=n ,so n*(n-1)...1 
        x++;
	}
    cout<<n<<"!="<<ans<<endl;
	return 0;
}
