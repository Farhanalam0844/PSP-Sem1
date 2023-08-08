#include<iostream>
using namespace std;
int main(){
	int row=3;
	int col=3;
	int arr[row][col];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<"Enter value in : ";
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<arr[i][j]<<'\t';
		}cout<<endl;
	}
	int ind;
	cout<<"Enter row index : ";
	cin>>ind;
	for(int j=0;j<col;j++){
	
	for(int i=row;i>ind;i--){
		arr[i][j]=arr[i-1][j];
	}}
	for(int i=0;i<col;i++){
		cin>>arr[ind][i];
	}row++;
		
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<arr[i][j]<<'\t';
		}cout<<endl;
	}
}
