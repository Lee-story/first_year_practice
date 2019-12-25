#include <iostream> 
using namespace std;  
int main()
{  
    int num;  
    while(cin>>num){ 
    int ans[8]; 
    //determine positive and negative 0 or 1
	if(num>0)  
    ans[0]=0;  
    else{  
    ans[0]=1;  
    num+=128;//num+128
    }  
    //
	for(int i=0;i<7;i++){  
    ans[7-i]=num%2;  
    num/=2;  
    }  
    for(int i=0;i<8;i++)  
    cout<<ans[i];  
    //cout<<endl;
	}  
    return 0;  
}  
