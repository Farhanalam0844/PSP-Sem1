#include<iostream>
#include<algorithm>
using namespace std;
int absolute(int);
int reduce(int&,int&);
int main(){
	int num,denum;
	cout<<"Enter value of numenator : ";
	cin>>num;
	cout<<"Enter value of denumenator : ";
	cin>>denum;
	num=absolute(num);
	denum=absolute(denum);
	reduce(num,denum);
	cout<<num<<"/"<<denum;
}
int absolute(int a){
	if(a<0)
	a=-a;
	return a;
}
int reduce(int& num,int& denum)
{
	int y=__gcd(num,denum);
	num=num/y;
	denum=denum/y;
}
