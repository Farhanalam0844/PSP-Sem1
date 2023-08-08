#include<iostream>
using namespace std;
char toLower(char);
char toUpper(char);
int main(){
	cout<<"For Upper to Lower case \n";
	cout<<"******\n";
	char ch;
	cout<<"Enter a Upper case alphabet to convert it into lower "<<endl;
	cin>>ch;
	while(ch<'A'||ch>'Z'){
		cout<<"Character is not in Upper form alphabet\nEnter new character "<<endl;
		cin>>ch;
	}
	cout<<toLower(ch)<<"\n";
	cout<<"******\n";
	cout<<"For Lower to Upper case \n";
	cout<<"******\n";
	char Ch;
	cout<<"Enter a Lower case alphabet to convert it into Upper "<<endl;
	cin>>Ch;
	while(Ch<'a'||Ch>'z'){
		cout<<"Character is not in lower form alphabet\nEnter new character "<<endl;
		cin>>Ch;
	}
	cout<<toUpper(Ch);
}
char toLower(char ch){
	ch=ch+32;
	return ch;	
}
char toUpper(char Ch){
	Ch=Ch-32;
	return Ch;	
}
