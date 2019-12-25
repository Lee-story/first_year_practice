#include <iostream>
using namespace std;
int main()
{
	cout<<"N\t";
	cout<<"10*N\t"; 
	cout<<"100*N\t";
	cout<<"1000*N\t"<<endl;
	int N=1;
	while(N<6)
	{
	for(;N<=5;N++)
{
	cout<<N<<"\t";
	cout<<N*10<<"\t"; 
	cout<<100*N<<"\t";
	cout<<1000*N<<"\t"<<endl;	
}
}
return 0;
}
