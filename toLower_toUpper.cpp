#include<iostream>
using namespace std;
char toLower(char);
char toUpper(char);
bool IsAlpha(char);
bool IsLower(char);
bool IsUpper(char);
int main(){
	char ch,Ch,CH;
	cout<<"For Upper to Lower case \n";
	cout<<"******\n";	
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
	cout<<"Enter a Lower case alphabet to convert it into Upper "<<endl;
	cin>>Ch;
	while(Ch<'a'||Ch>'z'){
		cout<<"Character is not in lower form alphabet\nEnter new character "<<endl;
		cin>>Ch;
	}
	cout<<toUpper(Ch)<<endl;
	
	// Is Alphabet??
	cout<<"******\n";
	cout<<"Enter a value to check if it is a aplhabet "<<endl;
	cin>>CH;
	if(IsAlpha(CH)){
		cout<<CH<<" is an alphabet \n";
	}
	else cout<<CH<<" is not an Alphabet\n";
	cout<<"******\n";
	cout<<"Enter a number to check if it is in lower alphabet form "<<endl;
	cin>>ch;
	if(IsLower(ch))
		cout<<ch<<" is a lower alphabet \n";
	else 
	cout<<ch<<" is not a lower alphabet \n";
	cout<<"******\n";
	cout<<"Enter a number to check if it is in Upper alphabet form "<<endl;
	cin>>ch;
	if(IsUpper(ch))
		cout<<ch<<" is a Upper alphabet \n";
	else 
	cout<<ch<<" is not a Upper alphabet \n";	
}
char toLower(char ch){
	ch=ch+32;
	return ch;	
}
char toUpper(char Ch){
	Ch=Ch-32;
	return Ch;	
}
bool IsAlpha(char CH){
	if(CH>='A'&&CH<='Z'||CH>='a'&&CH<='z'){
		return true;
	}
	else return false;
}
bool IsLower(char ch){
	if(ch>='a'&&ch<='z')
	return true;
	else return false;
}
bool IsUpper(char ch){
	if(ch>='A'&&ch<='Z')
	return true;
	else return false;
}
