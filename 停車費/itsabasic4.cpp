#include <iostream>
using namespace std;
int main()
{
    int a,b,x,y,time,ans=0;
    cout<<"�п�J�����ɶ�"<<endl;
    cin>>a>>b;
    cout<<"�п�J���}�ɶ�"<<endl;
    //24hr,hh/mm
	cin>>x>>y; 
    if((0<=a&&a<=23)&&(0<=x&&x<=23)){ 
        {  
            if((0<=b&&b<=59)&&(0<=y&&y<= 59))  
            {  
				time=(x-a)*60+(y-b);  
				if(time<=120)  
                {  
                ans=(time/30)*30;  
                cout<<"�o�ˬO "<<ans<<" ��"<<endl;  
                }  
                else if(240>=time&&time>120)  
                {  
                ans=120+((time-120)/30)*40;  
                cout<<"�o�ˬO "<<ans<<" ��"<<endl;  
                }  
                else if(240<time)  
                {  
                ans=120+160+((time-240)/30)*601;  
                cout<<"�o�ˬO "<<ans<<" ��"<<endl;  
                }  
            }  
        }  
    }  
    return 0;
}
