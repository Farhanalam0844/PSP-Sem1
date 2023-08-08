#include<iostream>
using namespace std;
int main(){
	const int SIZE=21;
	int array[SIZE];
	int i,tot=0;
	for(i=0;i<SIZE;i++){
		cout<<"Enter value in array : ["<<i<<"] ";
		cin>>array[i];
		tot+=array[i];
	}
	int avg=tot/SIZE;
	cout<<"Average is : "<<avg<<endl;
	for(i=0;i<SIZE;i++){
		array[i]=avg-array[i];
		cout<<"Difference b/w avg and score of student : "<<(i+1)<<" is : "<<array[i]<<endl;
		
	}
	
}
