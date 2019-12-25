#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int random(int ans);
int main()
{
	int a;
	cout<<"the number is: "<<random(a)<<endl;
} 
int random(int ans)
{
	srand((unsigned)time(NULL));//each number is different 
	while(ans=rand())
	if(ans<=1112&&ans>=1000)
	return ans;
	else
	continue;
}
