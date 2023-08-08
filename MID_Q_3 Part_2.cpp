#include<iostream>
using namespace std;
int Absolute(int num){
	if(num<0){
		num=-num;
	}
	else return num;
}
int G_C_D(int num,int denum){
		int rem=num%denum;
while (rem != 0) {
	num=denum;
   denum= rem ;
   rem=num%denum;
   
}
return denum; 
}
int reduce(int& num,int& denum,int y){
	num=num/y;
	denum=denum/y;
	
}
int main(){
	int num,denum;
	cin>>num>>denum;
	num=Absolute(num);
	denum=Absolute(denum);
	int y= G_C_D(num,denum);
	int reduce(num,denum,y);
	cout<<num<<denum;
}
