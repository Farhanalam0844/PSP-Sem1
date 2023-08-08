#include<iostream>
using namespace std;
double getSales(double& );
void findHighest(double ,double ,double ,double );
int main(){
	double whSal;
	cout<<"Enter WholeSale for NorthEast : "<<endl;
	double Northeast= getSales(whSal);
	cout<<"Enter WholeSale for NorthWest : "<<endl;
	double Northwest= getSales(whSal);
	cout<<"Enter WholeSale for SouthEast : "<<endl;
	double Southeast= getSales(whSal);
	cout<<"Enter WholeSale for SouthWest : "<<endl;
	double Southwest= getSales(whSal);
	findHighest(Northeast,Northwest,Southeast,Southwest);
}
double getSales(double& whSal){
	cin>>whSal;
while(whSal<0){
	cout<<"Value must not be negative" <<endl;
	cin>>whSal;
}
return whSal;
}
void findHighest(double NE,double NW,double SE,double SW){
if(NE>NW&& NE>SE&&NE>SW)
{
cout<<"Highest WholeSale is in NorthEast : "<<NE;
}
else if(NW>NE&& NW>SE&&NW>SW){
	cout<<"Highest WholeSale is in NorthWest : "<<NW;

}	
else if(SW>NE&& SW>SE&&SW>NW){
	cout<<"Highest WholeSale is in SouthWest : "<<SW;
	}
	else
	{cout<<"Highest WholeSale is SouthEast : "<<SE;
	}

}

