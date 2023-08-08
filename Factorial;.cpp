#include<iostream>
using namespace std;
int main(){
	int fact=1;
	int n;
	cout<<"Enter the number you want the factorial of "<<endl;
	cin>>n;
	if(n<1){
		cout<<"There is no factorial of negative number";
		return 0;
	}
	else{
	
	while(n>1){
		fact=fact*n;
		n--;
		
	}
}
	cout<<fact;
	
}
