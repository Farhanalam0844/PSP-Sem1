#include<iostream>
using namespace std;
int main(){
	int rows,cols;
	cout<<"Enter number of Rows : "<<endl;
	cin>>rows;
	cout<<"Enter number of Columns : "<<endl;
	cin>>cols;
	cout<<"Rectangle"<<endl;
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=cols;j++){
			cout<<"*";
		}cout<<endl;
	}
	cout<<"Right angle Triangle "<<endl; 
	for(int i=1;i<=rows;i++){
 		for(int j=1;j<=i;j++){
			cout<<"*";
		}cout<<endl;
	}
	cout<<"Hollow Rectangle "<<endl;
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=cols;j++){
			
			if(i==1||i==rows||j==1||j==cols)
			cout<<"*";
			else cout<<' ';
		}cout<<endl;
	}
	cout<<"Hollow Right angle Triangle "<<endl; 
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=i;j++){
			if(i==1||i==rows||j==1||j==i)
			cout<<"*";
			else cout<<' ';
		}cout<<endl;
	}
	cout<<"Right aligned Right angle triangle "<<endl;
	for(int i=1;i<=rows;i++){
		for(int j=rows;j>i;j--){
		cout<<' ';}
		for(int j=i;j>=1;j--){
			cout<<"*";
		
		}cout<<endl;
	}
/*	cout<<"Right aligned Right angle triangle "<<endl;
	for(int i=1;i<=rows;i++){
		for(int j=rows;j>i;j--){
		cout<<' ';}
		for(int j=i;j>=1;j--){
			if(j==rows||j==1||i==rows)
			cout<<"*";
			else if(j!=1||j!=i)
			cout<<" ";
		
		}cout<<endl;
	}*/
}
