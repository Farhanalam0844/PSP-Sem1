#include<iostream>
using namespace std;
void delete_val(int [],int,int);
void Add_val(int [],int,int);
int main(){
	//Size total
	int j=9;
	//size for modification
	int n=5;
	//Declaration
	int arr[j];
	//Input of array
	int i;
	for(i=0;i<n;i++){
		cout<<"Enter value in : array["<<i<<"] : ";
		cin>>arr[i];
	}
	//Index to delete
	int del;
	cout<<"Enter index you want value to delete in : ";
	cin>>del;
	//Function call for deletion
	delete_val(arr,n,del);
	//After deletion
	cout<<"///After deletion array is : ///\n";
	for(i=0;i<n-1;i++){
		cout<<"Value in array["<<i<<"] : "<<arr[i]<<endl;
	}
	
	// Add value in a index
	int ins;
	cout<<"Enter index you want value to add in : ";
	cin>>ins;
	//Function call for inserting value in index
	Add_val(arr,n,ins);
	cout<<"Now enter the value : ";
	cin>>arr[ins];
	//After insertion
	cout<<"/// After entering value ///\n";
	//Output
		for(i=0;i<n;i++){
		cout<<"Value in array["<<i<<"] : "<<arr[i]<<endl;
	}
}
//Delete value in array
void delete_val(int arr[],int n,int del){
int i;
	for(i=del;i<n;i++){
		arr[i]=arr[i+1];
	}
		
}
//Insertion in array

void Add_val(int arr[],int n,int ins){
	int i;
	for(i=n;i>=ins;i--){
		arr[i+1]=arr[i];
	}
}
