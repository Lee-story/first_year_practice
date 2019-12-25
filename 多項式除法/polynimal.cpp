#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int *q=new int[n-m+1];
	int a=n;//record the initial value
	int *x=new int[n+1], *y=new int[m+1];					
	for(int i=0;i<=n;i++)
	cin>>*(x+i);
	for(int i=0;i<=m;i++)
	cin>>*(y+i);	
	//Dividend
	for(int i=0;i<=n;i++){//determine the gradations of pow
		if(i==0)
		cout<<"("<<*(x+i)<<"x^"<<n;
		else if(i==n-1)
		cout<<*(x+i)<<"x";
		else if(i==n)
		cout<<*(x+i);
		else 
		cout<<*(x+i)<<"x^"<<n-i;
		if(n-i>0&&*(x+i+1)>=0)
		cout<<"+";
	}
	cout<<")/";
	//Divisor
	for(int i=0;i<=m;i++){
	if(i==0)
	cout<<"("<<*(y+i)<<"x^"<<m;
	else if(i==m-1)
	cout<<*(y+i)<<"x";
	else if(i==m)
	cout<<*(y+i);
	else 
	cout<<*(y+i)<<"x^"<<m-i;
	if(m-i>0&&*(y+i+1)>=0)
	cout<<"+";
	}
	cout<<")"<<endl;
	//determine dividend can be divided or not
	while(a>=m){
		int num=*x / *y; 
		*(q+n-a)=num;
		for(int i=0;i<=a;i++){
			if(i<=m)
			*(x+i)=*(x+i)-*(y+i)*num;
		}
		for(int i=0;i<a;i++)
		*(x+i)=*(x+i+1);
		a--;
	}
	//Quotient
	for(int i=0;i<n-m+1;i++){
		if(i==n-m)			 
		cout<<*(q+i);		
		else if(i==n-m-1)
		cout<<*(q+i)<<"x";
		else
		cout<<*(q+i)<<"x^"<<n-m-i;		
		if(n-m-i>0&&*(q+i+1)>=0) 
		cout<<"+";
	}
		cout<<endl;
	//Remainder
		for(int i=0;i<=a;i++){
			if(i==a){
			cout<<*(x+i);
			break;}
			else if(i==a-1&&*(x+i)!=0)
			cout<<*(x+i)<<"x";
			else if(*(x+i)!=0)
			cout<<*(x+i)<<"x^"<<a-i;
			if(a-i>0&&*(x+i+1)>0)
			cout<<"+";
		}
		cout<<endl;		
		//return memory(can bypass)
		delete[]q;
		delete[]y;
		delete[]x;		
}
