#include<iostream>
#include<string>
using namespace std;
int main(){
	string name[5]={"mild","medium","sweet","hot", "zesty"};
	int no_sold[5];
	int i,tot=0;
	for(i=0;i<5;i++){
		cout<<"Enter no of sold jars for "<<name[i]<<" : ";
		cin>>no_sold[i];
		tot+=no_sold[i];
	}
	string jar1,jar2;
	int max=INT_MIN;
	int min=INT_MAX;
	for(i=0;i<5;i++){
		cout<<"No of jars sold in a month of "<<name[i]<<" is : "<<no_sold[i]<<endl;
		if(no_sold[i]>max){
		
		max=no_sold[i];
		jar1=name[i];
		}
		if(no_sold[i]<min){
		min=no_sold[i];
		jar2=name[i];
		}
		
	}
	cout<<"Total jars sold are : "<<tot<<endl;
	cout<<"Maximum value selling jar is : "<<jar1<<"\n and its no of sold jars are : "<<max<<endl;
	cout<<"Minimum value selling jar is : "<<jar2<<"\n and its no of sold jars are : "<<min<<endl;
}
