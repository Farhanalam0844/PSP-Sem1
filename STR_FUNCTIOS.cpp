#include<iostream>
using namespace std;
//String copy from second to first;
void Str_Cpy(char [],char []);
// Length of a string ?? 
int Str_Len(char str1[]);
// String Cancatination
void Str_Can(char [],char []);
//Comparison of two strings
int Str_com(char [],char []);
//Reverse String
void Str_rev(char []);
int main() {
/*	//String declaration
	char str1[30],str2[30];
	// Inputs in Both Strings
	cout << "Enter value in first string : ";
	cin>>str1;
	cout << "Enter value in second string : ";
	cin >> str2;
	//Copy Function
	Str_Cpy(str1, str2);
	cout <<"After copying second to first \nFirst sring is : "<< str1 << endl;
	//Length of a String ??
	int y=Str_Len(str1);
	cout << "Length of first string is : "<<y<<endl;
	// String Cancatination
	//Third String declaration and input
	char str3[30];
	cout << "Enter value inn second string for cancatination : ";
	cin >> str3;
	Str_Can(str1, str3);
	//cout<<"After cancatination string(first) is : " << str1 << endl;
	//Comapre function
	char STR_1[30], STR_2[30];
	cout << "Enter values in two strings to compare\nEnter value in first : ";
	cin >> STR_1;
	cout << "Now Enter second string : ";
	cin >> STR_2;
	int x = Str_com(STR_1, STR_2);
	if (x == 1) {
		cout << "First string is greater !" << endl;
	}
	else if (x == -1)
		cout << "Second is greater than first !" << endl;
	else if (x == 0)
		cout << "Both are equal ";
	*/// reverse string 
	char str[20];
	cout << "Enter string to reverse it : ";
	cin >> str;
	//Function call
	Str_rev(str);
	cout << str;
}/*
// Copy Function
void Str_Cpy(char str1[], char str2[]) {
	int i;
	for (i = 0; str2[i] != '\0'; i++) {
		str1[i] = str2[i];
	}
	str1[i] = '\0';
}
// Length function
int Str_Len(char str1[]) {
	int i;
	for (i = 0; str1[i] != '\0'; i++);
	return i;

}
//String Cancatination function
void Str_Can(char str1[],char str3[]) {
	int i,j,k;
	for (i = 0; str1[i] != '\0'; i++);
	str1[i] = ' ';
	i++;
	for (j = i, k = 0; str3[k] != '\0'; j++, k++) {
		str1[j] = str3[k];
	}
	str1[j] = '\0';

}
// Comparing Strings 
int Str_com(char STR_1[], char STR_2[]) {
	int i = 0;
	int count = 0;
	for (i; STR_1[i]!='\0'&&STR_2[i]!='\0'; i++) {
		if (STR_1[i] > STR_2[i])
			return 1;
		else if (STR_1[i] < STR_2[i])
			return -1;
	}
	if (STR_1[i] == '\0' && STR_2[i] == '\0')
		return 0;
	else if (STR_1[i] == '\0' && STR_2[i] != '\0')
		return -1;
}
// Function for reversing strings*/
void Str_rev(char str[]) {
	int i, j;
	for (i = 0; str[i] != '\0'; i++);
	i--;
	int k;
	for (j = i,k=0; k <= (i/2); k++, j--) {
		int temp = str[j];
		str[j] = str[k];
		str[k] = temp;

	}
}






















