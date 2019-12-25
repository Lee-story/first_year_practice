#include<iostream>
using namespace std;
int main()
{
    int n;
	int ans=1;
	int x=1;
	int pow;
	double e;
	cout<<"please enter a number and power to get the foemula:e(x)power=1+x/1!+....x/n!"<<endl;
    cin>>n>>pow;
    while(x<=n)
    {
        e=(double)pow/ans*x;
		//n=x,x will turn large ex:1.2.3.....=n ,so n*(n-1)...1,and power does too 
		x++;
		pow++;
		e+=1;
		;
	}
    cout<<"e="<<e<<endl;
	return 0;
}
