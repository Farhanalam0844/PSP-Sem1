#include<iostream>
using namespace std;
int id_fnt(int arr1[],int arr2[],int n);
const int size=5; 
int main()
{
	int arr1[size];
	int arr2[size];
	for(int i=0;i<size;i++)
	{
	cout<<"enter the first array :["<<i<<"]";
	cin>>arr1[i];
	cout<<"enter the second array :["<<i<<"]";
	cin>>arr2[i];
}
int x=id_fnt( arr1, arr2,size);
	if(x==1)
	cout<<" both array are identical :"<<endl;
	else if (x==0)
	cout<<"array is not identical :";
}
int id_fnt(int arr1[],int arr2[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr1[i]!=arr2[i])
		return 0;
	}
	if(i==n)
	return 1;
	
}
