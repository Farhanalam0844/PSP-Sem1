// Template Functions
#include<iostream>
using namespace std;
// Template Function
// 1
// if both parameters have same datatype
template <typename T>

T Add(T a,T b){
	return(a+b);
}
// 2
// if both parameters have different datatypes 
template <typename T,typename U>
U Sub(T x,U y){
	return(x-y);
}
// Swap Function  
template<typename X>
void Swap(X& a,X& b){
	X temp=a;
	a=b;
	b=temp;
}
int main(){
// Sum of integers
	int m,n;
	cout<<"Enter two integers to sum "<<endl;
	cin>>m>>n;
	cout<<Add<int>(m,n)<<endl;
// Sum of floats
	float k,l;
	cout<<"Enter two floats to sum "<<endl;
	cin>>k>>l;
	cout<<Add<float>(k,l)<<endl;
// Sum of Double
	double u,v;
	cout<<"Enter two doubles to sum "<<endl;
	cin>>u>>v;
	cout<<Add<double>(3.564,2.6789)<<endl;
// Sum of different data types
	char w;int e; 	
	cout<<"Enter char and then integer to add "<<endl;
	cin>>w>>e;
	cout<<Sub<char,int>(w,e)<<endl;
// Swap Function Integer
	int a,b;
	cout<<"Enter values of in integers"<<endl;
	cin>>a>>b;
	cout<<"Before Swap "<<a<<"\t"<<b<<endl;
	Swap<int>(a,b);
	cout<<"After Swap "<<a<<"\t"<<b<<endl;
// Swap Function Double
	double x,y;
	cout<<"Enter values of in double"<<endl;
	cin>>x>>y;
	cout<<"Before Swapping doubles are "<<x<<"\t"<<y<<endl;
	Swap<double>(x,y);
	cout<<"After Swapping doubles are "<<x<<"\t"<<y<<endl;
// Swap Function Char
	char i,j;
	cout<<"Enter values of in character"<<endl;
	cin>>i>>j;
	cout<<"Before Swap characters are "<<i<<"\t"<<j<<endl;
	Swap<char>(i,j); 
	cout<<"After Swap characters are "<<i<<"\t"<<j<<endl;
}
