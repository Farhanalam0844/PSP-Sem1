#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	int num;
	char ans;
	srand(time(0));
	int sec= rand()%11;
		do
		{
		int limit=0;
	do
	{
		cout<<"Enter a number between 1 to 10 to guess the random generated number "<<endl;
		cin>>num;
		while(num<0||num>10){
		cout<<"The number must be between 1 to 10 "<<endl;
		cin>>num;
	}
	if(num==sec){
		cout<<"Congrats! you have guessed right "<<endl;
	}
	if(num>sec){
		cout<<"Number is greater than the secret number "<<endl;
		cout<<"Try again "<<endl;
		limit++;
	}
	if(num<sec){
		cout<<"Number is less than the secret number "<<endl;
		cout<<"Try again "<<endl;
		limit++;
	}
	}
	while(num!=sec&&limit<=2);
	
	if(limit==3){
		cout<<"You failed "<<endl <<endl;
	cout<<"Press 'Y' or 'y' to continue and 'N' or 'n' to stop "<<endl;
		cin>>ans;}
	while(ans!='Y'&&ans!='y'&&ans!='N'&&ans!='n'){
		cout<<"Enter 'Y'/'y' or 'N'/'n'"<<endl;
		cin>>ans; 
	}
	}while(ans=='y'||ans=='Y');
		}
