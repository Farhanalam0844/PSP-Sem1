#include<iostream>
using namespace std;
void INPUT(int&,int&,int&);
int ConvertData(int,int,int);
int main(){
	int date,month,year;
	INPUT(date,month,year);
	cout<<ConvertData(date,month,year);
	int d1,d2;
	cout<<"Enter value in date 1 : ";
	cin>>d1;
	cout<<"enter value in date 2 : ";
	cin>>d2;
	/*
		//20221220 //19901218
	if(d1>d2)
	cout<<"first is "<<d2;
	else
	cout<<"first is "<<d1;*/
	// 20122022 //25121990
	//int d=d1/d2;
	d1=d1/1000
	if(d<1)
	cout<<"first is "<<d2;
	else
	 cout<<"first is"<<d1;
}
void INPUT(int& d,int& m,int& y){
	cout<<"Enter date : "<<endl;
	cin>>d;
	cout<<"Enter Month : "<<endl;
	cin>>m;
	cout<<"Enter Year : "<<endl;
	cin>>y;		
}
int ConvertData(int d,int m,int y){
	d=y*10000+m*100+d;
	return d;
}

