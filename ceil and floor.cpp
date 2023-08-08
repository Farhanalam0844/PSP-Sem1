#include<iostream>
using namespace std;
int ceil(double x)
{
	int y= x;
	if(x==y){
		return y;
	}
	else 
	x=x+1;
	y=x;
	cout<<"Ceil of the number is : "<<endl;
	return (y);
}
int floor(double x){
		int y= x;
	if(x==y){
		return y;
	}
	else 
	x=x-1;
	y=x;
	cout<<"Floor of the number is : "<<endl;
	return (y);	
	
}
int main(){
	double num;
	cout<<"Enter a number for ceil and floor function"<<endl;
	cin>>num;

	cout<<ceil(num)<<endl;
	cout<<floor(num)<<endl;
}
