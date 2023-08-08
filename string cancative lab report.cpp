#include<iostream>
using namespace std;
int main(){
	char first_name[20],last_name[20];
	cout<<"Enter your first name : ";
	cin>>first_name;
	cout<<"Enter last name : ";
	cin>>last_name;
	int i;
	for(i=0;first_name[i]!='\0';i++);
	first_name[i]=' ';
	i++;
	int j;
	for(j=i,i=0;last_name[i]!='\0';i++,j++){
		first_name[j]=last_name[i];
	}
	cout<<"Your full name is : "<<first_name<<endl;
	char date[20];
	cout<<"Enter your date of birth : ";
	cin>>date;
	char mon[20];
	cout<<"Enter month of your birth : ";
	cin>>mon;
	char year[4];
	cout<<"Enter year of your birth : ";
	cin>>year;
	
	for(i=0;date[i]!='\0';i++);
	date[i]='/';
	i++;
	int k;
	for(j=i,k=0;mon[k]!='\0';k++,j++){
		date[j]=mon[k];
	}
	date[j]='/';
	j++;
	for(j,k=0;year[k]!='\0';k++,j++){
		date[j]=year[k];
	}
	cout<<date;
}
