#include <fstream>
#include <iostream> 
using namespace std;
int player,player2;
const int M = 10;
const int N = 10;
int board[M][N];
int D[M][N];
int A[M][N]={0};
int maxD=0,maxA=0;
int dx,dy,ax,ay,valuex,valuey;
void defense(int x,int y)
{
	    int c=0;	
		//check(two dot)
		//left
		if(y!=0)
		for(int k=y;k>=y-5;k--){ 
		    if(k==0)break;
			if(board[x][k-1]==0||board[x][k-1]==player)break;
			else if(board[x][k-1]==player2)c++; 

		}
		//left and up
		if(x!=0&&y!=0) 
		for(int k=x,l=y;k>=x-5;k--,l--){
			if(k==0||l==0)break;
			if(board[k-1][l-1]==0||board[k-1][l-1]==player)break;
			else if(board[k-1][y-1]==player2)c++;
		}
		
	
		//up
		if(x!=0)
		for(int k=x;k>=x-5;k--){
			if(k==0)break;
		    if(board[k-1][y]==0||board[k-1][y]==player)break;
			else if(board[k-1][y]==player2)c++;
			
		}
	
		//right and up
		if(x!=0&&y!=9)
		for(int k=x,l=y;k>=x-5;k--,l++){
			if(l==9||k==0)break;
			if(board[k-1][l+1]==0||board[k-1][l+1]==player)break;
			else if(board[k-1][l+1]==player2)c++;
		}
		
		
		//right
		if(y!=9)
		for(int k=y;k<=y+5;k++){
			if(k==9)break;
			if(board[x][k+1]==0||board[x][k+1]==player)break;
			else if(board[x][k+1]==player2)c++;
		}
		//right and down 
		if(x!=9&&y!=9)
		for(int k=x,l=y;k<=x+5;k++,l++){
			if(k==9||l==9)break;
			if(board[k+1][l+1]==0||board[k+1][l+1]==player)break;
			else if(board[k+1][l+1]==player2)c++;		
		}
		//down
		if(x!=9)
		for(int k=x;k<=x+5;k++){
			if(k==9)break;
			if(board[k+1][y]==0||board[k+1][y]==player)break;
			else if(board[k+1][y]==player2)c++;
		}
		//left and down
		if(y!=0&&x!=9)
		for(int k=x,l=y;k<=x+5;k++,l--){
			if(k==9||y==0)break;
			if(board[k+1][l-1]==0||board[k+1][l-1]==player)break;
			else if(board[k+1][l-1]==player2)c++;
		}
		D[x][y]=c*10;
}
void three(int x,int y)//check(three dot)
{
		int d=0;
		//left
		if(y!=0)
		{
			for(int p=y;p>=y-4;p--){
			if(p==-1)break;
			else if(board[x][p]==player2)d++;
			 if(d==3&&board[x][p]==0){
			D[x][y]+=40;
			break;
			}
			else if(board[x][p]==player){
			D[x][y]=0;
			d=0;
			break;	
			}
			
		}
        }		
		//left and up
		d=0;
		if(x!=0&&y!=0) 
		{
			for(int k=x,p=y;p>=y-4;p--,k--){ 
			if(k==-1||p==-1)break;
			else if(board[k][p]==player2)d++;
			else if(d==3&&board[k][p]==0&&p==y-4){
			D[x][y]+=40;
			break;
			}
			else if(board[k][p]==player){
			D[x][y]=0;
			d=0;
			break;
			}
		}
		}
		//up
		d=0;
		if(x!=0)
		for(int k=x;k>=x-4;k--){
			if(k==-1)break;
			else if(board[k][y]==player2)d++;
			else if(d==3&&board[k][y]==0&&k==x-4){
			D[x][y]+=40;
			break;
			}
			else if(board[k][y]==player){
				D[x][y]=0;
				d=0;
				break;
			}
	}
		//right and up
		d=0;
		if(x!=0&&y!=9)
		for(int k=x,l=y;k>=x-4;k--,l++){
			if(l==10||k==-1)break;
			else if(board[k][l]==player2)d++;
			else if(d==3&&board[k][l]==0&&k==x-4){
				D[x][y]+=40;
				break;
			}
			else if(board[k][l]==player){
				D[x][y]=0;
				d=0;
				break;
			}
		}
		//right
		d=0;
		if(y!=9)
		for(int k=y;k<=y+4;k++){
			if(k==10)break;
			else if(board[x][k]==player2)d++;
			else if(d==3&&board[x][k]==0&&k==y+4){
				D[x][y]+=40;
				break;
			}
			else if(board[x][k]==player){
				D[x][y]=0;
				d=0;
				break;
			}
		}
		//right and down
		d=0;
		if(x!=9&&y!=9)
		for(int k=x,l=y;k<=x+4;k++,l++){
			if(k==10||l==10)break;
			else if(board[k][l]==player2)d++;
			else if(d==3&&board[k][l]==0&&k==x+4){
				D[x][y]+=40;
				break;
			}
			else if(board[k][l]==player){
				D[x][y]=0;
				d=0;
				break;
			}
		}
		//down
		 d=0;
		if(x!=9)
		for(int k=x;k<=x+4;k++){
			if(k==10)break;
			else if(board[k][y]==player2)d++;
			else if(d==3&&board[k][y]==0&&k==x+4){
				D[x][y]+=40;
				break;
			}
			else if(board[k][y]==player){
				D[x][y]=0;
				d=0;
				break;
			}
		}
		//left down
		 d=0;
		if(y!=0&&x!=9)
		for(int k=x,l=y;k<=x+4;k++,l--){
			if(k==10||l==-1)break;
			else if(board[k][l]==player2)d++;
			else if(d==3&&board[k][l]==0&&k==x+4){
				D[x][y]+=40;
				break;
			}
	    else if(board[k][l]==player){
	    	D[x][y]=0;
	    	d=0;
	    	break;
		}
}

}
//decide the value
void determine1(int x,int y)
{
	 
	if(D[x][y]>=maxD)
	{
	maxD=D[x][y];
	dx=x;
	dy=y;
	}
	
}
void attack(int x,int y)
{
	 int c=0;
		// check four dot and all dots are player's 
		//check left
		if(y!=0)
		for(int k=y;k>=y-5;k--){ 
		    if(k==0)break;
			if(board[x][k-1]==player2||board[x][k-1]==0)break;
			else if(board[x][k-1]==player)c++; 

		}	
		//left and up
		if(x!=0&&y!=0) 
		for(int k=x,l=y;k>=x-5;k--,l--){
			if(k==0||l==0)break;
			if(board[k-1][l-1]==player2||board[k-1][l-1]==0)break;
			else if(board[k-1][y-1]==player)c++;
		}
		//up
		if(x!=0)
		for(int k=x;k>=x-5;k--){
			if(k==0)break;
		    if(board[k-1][y]==player2||board[k-1][y]==0)break;
			else if(board[k-1][y]==player)c++;
			
		}
		//right and up
		if(x!=0&&y!=9)
		for(int k=x,l=y;k>=x-5;k--,l++){
			if(l==9||k==0)break;
			if(board[k-1][l+1]==player2||board[k-1][l+1]==0)break;
			else if(board[k-1][l+1]==player)c++;
		}
		//right
		if(y!=9)
		for(int k=y;k<=y+5;k++){
			if(k==9)break;
			if(board[x][k+1]==player2||board[x][k+1]==0)break;
			else if(board[x][k+1]==player)c++;
		}
		//right and down
		if(x!=9&&y!=9)
		for(int k=x,l=y;k<=x+5;k++,l++){
			if(k==9||l==9)break;
			if(board[k+1][l+1]==player2||board[k+1][l+1]==0)break;
			else if(board[k+1][l+1]==player)c++;
			
		}
				//down
		if(x!=9)
		for(int k=x;k<=x+5;k++){
			if(k==9)break;
			if(board[k+1][y]==player2||board[k+1][y]==0)break;
			else if(board[k+1][y]==player)c++;
		}
		//left and down
		if(y!=0&&x!=9)
		for(int k=x,l=y;k<=x+5;k++,l--){
			if(k==9||y==0)break;
			if(board[k+1][l-1]==player2||board[x+1][l-1]==0)break;
			else if(board[k+1][l-1]==player)c++;
		}
		A[x][y]=c*10;
}
//decide the values
void determine2(int x,int y)
{
  	if(A[x][y]>=maxA)
	{
	maxA=A[x][y];
	ax=x;
	ay=y;
	}
}
void write()
{
 ofstream file;
 file.open("board.txt");
 int i, j;
 for (i = 0;i < M;i++)
  for (j = 0;j < N;j++){
	file<<" "<<board[i][j]; 
	} 
	file.close();
}
void read()
{
 ifstream file;
 file.open("board.txt");
 int i, j;
 for (i = 0;i < M;i++)
  for (j = 0;j < N;j++)
   file >> board[i][j];
 file.close();
}
void show()
{
 int i, j;
 for (i = 0;i < M;i++)
 {
  for (j = 0;j < N;j++)
   cout << board[i][j];
  cout << endl;
}
}
void init()
{
 int i, j;
 for (i = 0;i < M;i++)
  for (j = 0;j < N;j++)
   board[i][j] = 0;
}
bool set(int i, int j,int m)
{
 if (0 == board[i][j])
 {
  board[i][j] = m;
  return true;
 }
 else
  return false;
}
void play(int m)
{
 if(m==1||m==2)
 {
 int x = valuex;
 int y = valuey;
 cout << "(" << x << "," << y << ")" << endl;
 set(x,y,m);
}
}
int check()
{
 int winner = 0;
 return winner;
}
int main(int n,char** args)
{
 int player = args[1][0] - '0';
	if(player==1)player2=2;
  	else player2=1;
 if (player == 0) {
  init();write();show();
 }
 else if(player==1||player==2)
 {
  read();
  cout << "player" << player<< endl;
  for(int i=0;i<M;i++)
		for(int j=0;j<N;j++){
		if(board[i][j]==0){
		three(i,j);
		defense(i,j);
		attack(i,j);
	}
		determine1(i,j);
		determine2(i,j);
}
	if(maxD>=maxA)
	{
		valuex=dx;
		valuey=dy; 
	}
	else
	{
		valuex=ax;
		valuey=ay;
	}
	//clear the value
	for(int i=0;i<M;i++)
		for(int j=0;j<N;j++){
		A[i][j]=0;
		D[i][j]=0;
	}
  	play(player);
  	write();
  	show();
   	return 0;
   }
   	 
 }

