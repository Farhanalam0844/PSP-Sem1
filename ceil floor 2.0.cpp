#include<iostream>
#include<cmath>
int ceil(double x);
int floor(double x);
using namespace std;
int main(){
	double x;

	cout<<"Enter the value ";
	cin>>x;
	cout<<"Ceil of "<<x<<" is ";
	cout<<ceil(x)<<endl;
	cout<<"Floor of "<<x<<" is ";
	cout<<floor(x)<<endl;
	
}
int ceil(double x){
	int a=x;
	if(x>a){
		return (a+1);
	}
	else 
		return a;

}
int floor(double x){
	int a=x;
	if (x<a){
		return (a-1);
 	}
	else {
		return a;
	}
	
}

