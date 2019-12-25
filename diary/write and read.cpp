#include<fstream>
#include<iostream>
#include<string.h>
using namespace std;
char date[100];
char word[100];
char name[100];
char word2[100];
char name2[100];
char define;
char define2;
int select=0;
fstream file;
void enter();
void key();
void read();
int replay();
int reread();
int menu();
int main()
{
	menu();
	if(select==1){
	do
	{
	enter();
	key();
}while(replay());
}
	if(select==2){
	do
	{
	read();
	cout<<endl;
}while(reread());
}	
	if(select==3){
	return 0;
	file.close();
}
}
void enter()
{
	cout<<"請輸入要存的名稱"<<endl;
	cin>>name;
	file.open(name,ios::app);
	cout<<"請輸入紀錄日期 xxxx-xx-xx"<<endl;
	cin>>date;
	cout<<"請輸入內容"<<endl;
	cin>>word;
	strcat(date,word);
}
void key()
{
	size_t ans1=strlen(date);
	for(int i=0;i<=ans1;i++)
	{date[i]+=30;}
	file.write(date,ans1);
	file.close();
}
int replay()
{
	cout<<"是否要繼續輸入 Y/N"<<endl;
	cin>>define;
	if(define=='Y'||define=='y')
	return 1; 
	if(define=='N'||define=='n')
	return 0;
}
int reread()
{
	cout<<"是否要繼續讀取 Y/N"<<endl;
	cin>>define2;
	if(define=='Y'||define=='y')
	return 1; 
	if(define=='N'||define=='n')
	return 0;
}
void read()
{
	cout<<"請輸入檔案名稱"<<endl;
	cin>>name2;
	file.open(name2,ios::in);
	file.read(word2,sizeof(word2));   	
	size_t ans2=strlen(word2); 
	for(int i=0;i<=ans2;i++)
	{word2[i]-=30;}
	cout<<word2;
	cout<<endl;
}
int menu()
{
	cout<<"歡迎進入目錄系統，請選擇"<<endl;
	cout<<"(1)寫日記(2)讀日記(3)離開"<<endl;
	cin>>select;
}
