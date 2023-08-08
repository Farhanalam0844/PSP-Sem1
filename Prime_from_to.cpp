#include<iostream>
using namespace std;
int Primes_from_to(int n);
int main(){
	int first,last;
	cout<<"Enter two numbers to find prime between : "<<endl;
	cout<<"Enter First value : "<<endl;
	cin>>first;
	cout<<"enter second value : "<<endl;
	cin>>last;
 	while(last<first){
		cout<<"Second number must be larger than te first.\nEnter the second number again "<<endl;
		cin>>last;
	}
	for(int i=first;i<=last;i++){
		if(Primes_from_to(i)){
			cout<<i<<endl;
		}
	}	
}
int Primes_from_to(int n){
	int count=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			count=count+1;
		}	
	}
	if(count==2){
		return true;
	}
	else 
	return 0;
}
