#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n=5;
//	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int maxNo=INT_MIN;
	int minNo=INT_MAX;
	for(int i=0;i<n;i++){
		if(arr[i]>maxNo){
			maxNo=arr[i];
		}
		if(arr[i]<minNo){
			minNo=arr[i];
		}
	}
	cout<<maxNo<<"\t"<<minNo<<endl;
	for(int i=0;i<n;i++){
	maxNo=max(maxNo,arr[i]);
	minNo=min(minNo,arr[i]);
		
	}
	cout<<maxNo<<"\t"<<minNo;
	
}

