#include<iostream>
using namespace std;
const int row=3;
const int col=3;
int main(){
	int arr[row][col],arr2[row][col],arr3[row][col]={0};
	int i,j,k;
	for(i=0;i<row;i++){
	for(j=0;j<col;j++){
		cout<<"Enter value in Marix : ["<<i<<"]["<<j<<"] : ";
		cin>>arr[i][j];
	}
	}
/*	for(i=0;i<row;i++){
	
	for(j=0;j<col;j++){
		cout<<"Enter value in Marix 2 : ["<<i<<"]["<<j<<"] : ";
		cin>>arr2[i][j];
	}
	
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			for(k=0;k<row;k++){
				arr3[i][j]+=arr[i][k]*arr2[k][j];
			}
		}
	}
		for(i=0;i<row;i++){
	for(j=0;j<col;j++){
		cout<<arr3[i][j]<<'\t';
	}cout<<endl;
	
	}*/
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(j>=i)
			cout<<arr[i][j]<<'\t';
			else cout<<"\t";
		}cout <<endl;
	}cout<<endl<<endl;
		for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(i>=j)
			cout<<arr[i][j]<<'\t';
		}cout <<endl;
	}
	
	
}
