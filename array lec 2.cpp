#include<iostream>
using namespace std;
int main(){
	int n,search;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	// LinearSearch
/*	cin>>search;
	for(int i=0;i<n;i++){
		if(arr[i]==search){
			cout<<i<<endl;
		}
		
	}
	*/
	// Binary Search
	cin>>search;
	int start=0,mid,end=n;
	while(start<=end){
		mid=(start+end)/2;
		if(arr[mid]==search){
			cout<<mid;
			break;
		}	
		else if(search>arr[mid]){
			start=mid+1;
		}
		else if (search<arr[mid]){
			end=mid-1;
		}
	}
	
	
	
	
	
	
	
}
