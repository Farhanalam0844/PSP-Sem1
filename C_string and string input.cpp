#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
	
	string str;
	// String can be input by getline not with cin.get
	getline(cin,str);
	// IF index is not passed it will print address
	// &str    = address
	//while &str[3]=element from third index to onward
	cout<<&str[5]<<endl;

	char str1[20];
// Char array (C_STRING) can be inputted by cin.get not getline
	cin.get(str1,100);
		cin.ignore();
//	cout<<str1[0]<<endl;
cout<<&str1[3];
}
