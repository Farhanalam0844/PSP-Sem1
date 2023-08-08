#include<iostream>
using namespace std;
int main(){
	const int course=5;
	const int students=40;
	int arr[students][course];
	int i,j;
	int max;
	for(i=0;i<students;i++){
		for(j=0;j<course;j++){
			cout<<"Enter score of Student : "<<i+1<<" in course : "<<j+1<<" : ";
			cin>>arr[i][j];
			
			if(arr[i][j]>max)
			max=arr[i][j];
		}cout<<"Maximum marks of Student : "<<i+1<<" are : "<<max<<endl;
		max=INT_MIN;
	}
}
