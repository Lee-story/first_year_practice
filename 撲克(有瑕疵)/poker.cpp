#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() 
{
    int poker[53];
    int i,j,x=0,number,k=0,y=0;
    //set the value to poker[]
	for(i=1;i<=52;i++)
    poker[i]=i; 
    //shuffle
	srand(time(0));
    for(i=1;i<=52;i++){
        j=rand()%52+1;
        x=poker[i];
        poker[i]=poker[j]; 
        poker[j]=x; 
    }
	//define the color
	for(i=1;i<=52;i++){
		switch((poker[i]-1)/13){//1~13,14~26,27~39,40~52.divide 4 group 
            case 0: 
                cout<<" Spade";break;
            case 1: 
                cout<<" Heart";break;
            case 2: 
                cout<<" Diamond";break;
            case 3: 
                cout<<" Club";break;
        } 
        //define the numbers
		number=poker[i]%13;
        switch(number){//some cards are english,so let it turn
            case 0: 
                cout<<"K ";break;
            case 12: 
                cout<<"Q ";break;
            case 11: 
                cout<<"J ";break;
            default://those surplus display 
                cout<<number<<" ";break;
        } 
		if(i%13==0){cout<<endl;} 
}
//enter the values to the two dimensional array
	char poker2[4][13];
	int a,b;
	int c=0;
	for(a=0;a<=3;a++){
		for(b=0;b<=12;b++){
			poker2[a][b]=poker[c];
			c++;
			cout<<poker2;
	}
	cout<<endl;
}
//match straight
bool straight[4];
for(int q=0;q<4;q++){
	for(int r=0;r<9;r++){
		for(k=0;k<5;k++)
		if(poker2[q][r+k]==0)break;
		if(k==5){
		straight[q]=true;
		break;
		}
	}
}
//match fullhouse
bool fullhouse[4];
	for(i=0;i<4;i++)
	if(poker2[i][3]+poker2[i][4]>=2||poker2[i][3]+poker2[i][4]==1&&poker2[i][2]>=1)
	fullhouse[i]=true;
//display
for(i=0;i<4;i++)
{
	cout<<"play"<<i+1<<(straight[i]?" has straight":" no straight");
	cout<<(fullhouse[i]?" has fullhouse":" no fullhouse")<<endl;	
}	

	return 0;
} 

