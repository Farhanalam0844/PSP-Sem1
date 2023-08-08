#include<iostream>
#include<cmath>
using namespace std;
int PowerFunc(int num,int pow);
int main(){
	int num,pow;
	cout<<"Enter the number : "<<endl;
	cin>>num;
	cout<<"Enter the power : "<<endl;
	cin>>pow;
	
	cout<<PowerFunc(num,pow);
	
}
int PowerFunc(int num,int pow){
	int p=1;
		for(int i=pow;i>pow;i--){
		p=p*num;
}
	return p;
}
