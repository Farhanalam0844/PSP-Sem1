#include<iostream>
using namespace std;
int main(){
	char arr1[]="ADBBCBABCDACDBDCCADB";
	char arr2[21];
	int i;
	for(i=0;i<20;i++){
	cout<<"Enter answer of Driver of Question # "<<i+1<<" : ";
	cin>>arr2[i];
	while(arr2[i]<'A'||arr2[i]>'D'){
		cout<<"Enter a valid answer \nEnter again : ";
		cin>>arr2[i];
	}
	
	}
	int count=0,count2=0;
	for(i=0;i<20;i++){
		if(arr1[i]==arr2[i]){
			count++;
		}
		else 
		{
			cout<<"Question # "<<i+1<<" is wrong "<<endl;
			count2++;
		}
	
	}
	if(count>15)
	cout<<"Driver has passed "<<endl;
	else 
	cout<<"Driver failed the test "<<endl;
	cout<<"Total correct answers are : "<<count<<endl;
	cout<<"Total Wrong answers are : "<<count2<<endl;
}
