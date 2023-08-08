#include<iostream>
using namespace std;
void Input(int&, double& );
double CalSum(int,double);
double Power( double,int,int);
int main()
{
	 int n; double y;
	Input(n, y);
	cout<<CalSum(n, y)<<endl;
}
void Input(int& n, double& y)
{
	cout << "Enter value of power integer n : ";
	cin >> n;
	while (n < 0) 
	{
		cout << "Value must not be negative \nEnter again : ";
		cin >> n;
	}
	cout << "Enter value of double y : ";
	cin >> y;
}
double CalSum(int n, double y)
{
	int i;
	double tot = 0.0;
	for(i = n; i >= 0; i--)
	{
		tot+=Power(y,n,i);
	}
	return tot;
}
double Power( double y,int n,int i)
{
	int j;
	for (j = 1; j < i-1; j++)
		y= y * n;
	cout<<y<<endl;
	return y;
}
