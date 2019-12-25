#include<iostream>
using namespace std;
int main()
{
	int matrix_1[3][3];
	int matrix_2[3][3];;
	int multiplication[3][3];
	//enter number to array
	cout<<"Please enter 9 numbers to creat a matrix that 3X3"<<endl;
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
	cin>>matrix_1[i][j];
	cout<<"Please enter 9 numbers to creat a matrix that 3X3 again"<<endl;
	for(int a=0;a<3;a++)
	for(int b=0;b<3;b++)
	cin>>matrix_2[a][b];
	//display the matrix
	cout<<"first matrix"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matrix_1[i][j]<<" ";
        }
	cout<<endl;
	}
	cout<<"secomd matrix"<<endl;
	for(int a=0;a<3;a++){
		for(int b=0;b<3;b++){
			cout<<matrix_2[a][b]<<" ";
        }
	cout<<endl;
	}
	//Arithmetic
	cout<<"addition"<<endl;
	for(int i=0;i<3;i++){ 
		for(int j=0;j<3;j++){ 
		cout<<matrix_1[i][j]+matrix_2[i][j]<<" "; 
	} 
	cout<<endl; 
} 
	cout<<"subtraction"<<endl;
	for(int i=0;i<3;i++){ 
		for(int j=0;j<3;j++){ 
		cout<<matrix_1[i][j]-matrix_2[i][j]<<" "; 
	} 
	cout<<endl; 
} 
	cout<<"multiplication"<<endl;
	for(int i=0;i<3;i++){ 
		for(int j=0;j<3;j++){ 
			multiplication[i][j]=0;//initialize the matrix 
			for(int k=0;k<3;k++)
			multiplication[i][j]+=matrix_1[i][k]*matrix_2[k][j];
			cout<<multiplication[i][j]<<" "; 
	} 
	cout<<endl; 
} 	
return 0; 
}
