#include<iostream>
using namespace std;
int main()
{
	int N1,N2,N3,largest,smallest;//define
	cout<<"please enter first number ";
	cin>>N1;
	cout<<"please enter second number ";
    cin>>N2;
	cout<<"please enter third number ";
    cin>>N3;
    largest=N1>N2?N1:N2;
    largest=largest>N3?largest:N3;
    smallest=N1<N2?N1:N2;
    smallest=smallest<N3?smallest:N3;
	//use ?: (conditional operator) to compare
	cout<<endl;
	cout<<N1<<","<<N2<<","<<N3<<"in these numbers,the largest is:"<<largest<<endl;
	cout<<N1<<","<<N2<<","<<N3<<"in these numbers,the smallest is:"<<smallest; 
	return 0;
}
