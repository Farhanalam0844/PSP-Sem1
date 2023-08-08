#include<iostream>
using namespace std;
int main(){
	// Selection Sort Array
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	//Before Sorting
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}cout<<endl;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[i]){
				int temp=arr[j];
		 		arr[j]=arr[i];
				arr[i]=temp;
			}
			
		}
	}
	// After Sorting
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
	
	
	
	
	
	
}
