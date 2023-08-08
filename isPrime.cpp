#include<iostream>
#include<cmath>
using namespace std;
void isPrimeInput(int& start,int& end){
	cout<<"Enter the first number for prime numbers between two : ";
	cin>>start;
	while(start<0){
		cout<<"Number must be positive ";
		cin>>start;
	}
	cout<<"Enter the second number for prime numbers between two : ";
	cin>>end;
	while(end<start){
		cout<<"Number must be positive and greater than the first : ";
		cin>>end;
	}
}
 bool isPrime(int n){
	int count =0;
 	for(int i=1;i<=n;i++){
 		if(n%i==0){
 		 count =count+1;
 		 }	 
	 }
	 if (count==2)
		return true;
	else 
	return false;
 }
int main(){
	int start,end;

	isPrimeInput(start,end);
	for(int i=start;i<=end;i++){
		if(isPrime(i))
			cout<<i<<endl;

	}
	
}
