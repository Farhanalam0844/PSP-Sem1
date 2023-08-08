#include<iostream>
using namespace std;
int gcd(int ,int );
int main(){
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b);
}
int gcd(int a,int b){
	int rem=a%b;
	while(rem!=0){
		a=b;
		b=rem;
		rem=a%b;
	}
	
	return b;
}
