#include<iostream>
using namespace std;
int main(){
	const int x=2;
	const int y=3;
	int i,j;
	int arr[x][y];
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			cout<<"Enter value in array : ["<<i<<"]["<<j<<"] : ";
			cin>>arr[i][j];
		}
	}

	for(i=0;i<x;i++){
		for(j=i;j<y;j++){
			int temp=arr[i][j];
			arr[i][j]=arr[j][i];
			arr[j][i]=temp;
		}}
	cout<<"Transpose is \n";
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			cout<<arr[i][j]<<"\t";
		}cout<<endl;
	}
	
	
	
}
