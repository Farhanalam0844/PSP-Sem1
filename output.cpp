#include<iostream>
using namespace std;
int main(){
	int x=0,y=0;
	while(x++<5);
	{
		if(x<3)
		y+=x++;
		y+=x*x;
	}
	cout<<x<<"\t"<<y;
	
}
