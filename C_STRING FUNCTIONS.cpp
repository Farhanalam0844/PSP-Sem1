//Strings ?? strcpy , strncpy
//Strcat , strncat 
//Strcmp , strncmp , stricmp
//Strlen
#include<iostream>
using namespace std;
//GET length Function prototype
int strlen(char[]);
//String concatinate
void strcnc(char[], char[]);
//String cancatinate for n numbers
void strncnc(char[], char[], int);
//String copy
void strcpy(char[], char[]);
//String copy for n numbers
void strncpy(char[], char[], int);
//String campare
int strcmp(char[], char[]);
//String compare upto n
int strncmp(char [], char [], int);
//String comapare for i
int stricmp(char [], char []);
int main() {
	int n;
	const int SIZE = 50;
	char str[SIZE];
	char str2[SIZE];
	char str3[SIZE], str4[SIZE];
	//	cout<<str<<endl<<str2;
	cout << "Enter the String : ";
	cin >> str;
//Length 
	cout << str << endl;
	cout << "Length of String is : " << strlen(str) << endl;
//Cancatenate
	cout << "Enter another string to canactenate in first : ";
	cin >> str2;
	strcnc(str, str2);
	cout << "After copying string is : " << str << endl;
//Cancatenate with n length
	cout << "Enter number of characters you want to catenate from string 2 to string 1 : ";
	cin >> n;
	strncnc(str, str2, n);
	cout << "After concatinating with numbers string 1 will be : " << str << endl;
	cout << "Enter string 1 for copying : ";
	cin >> str3;
	cout << "Now enter second string : ";
	cin >> str4;
//Copy function
	strcpy(str3, str4);
	cout << "After copying second string to first : string 1 is : " << str3 << endl;
// Copy n Elements
	cout << "Enter no of characters you want to copy from second to frist : ";
	cin >> n;
	strncpy(str3, str4, n);
	cout << "After copying " << n << " characters first string is : " << str3 << endl;
	cout << "Enter two strings to compare : ";
	char str5[SIZE], str6[SIZE];
	cout << "Enter first string : ";
	cin >> str5;
	cout << "Enter second string : ";
	cin >> str6;
	int x = strcmp(str5, str6);
	if (x == 0)
		cout << "Both are equal " << endl;
	if (x < 0) {

		cout << "First is smaller and second is greater " << endl;
	}
	else if (x > 0)
	{
		cout << "First is greater " << endl;
	}
	cout << "Enter index to which you want to compare strings : ";
	cin >> n; 
	 x = strncmp(str5, str6, n);
	if (x == 0)
		cout << "Both are equal " << endl;
	if (x < 0) {

		cout << "First is smaller and second is greater " << endl;
	}
	else if (x > 0)
	{
		cout << "First is greater " << endl;
	}
	x = stricmp(str5, str6);
	cout << "Using Stricmp function : " << endl;
	if (x == 0)
		cout << "Both are equal " << endl;
	if (x < 0) {

		cout << "First is smaller and second is greater " << endl;
	}
	else if (x > 0)
	{
		cout << "First is greater " << endl;
	}
}
int strlen(char s[]) {
	int i;
	for (i = 0; s[i] != '\0'; i++) {

	}
	return i;
}
void strcnc(char s[], char s2[]) {
	int i, j;
	for (i = 0; s[i] != '\0'; i++) {
	}
	s[i] = ' ';
	i++;
	for (i, j = 0; s2[j] != '\0'; i++, j++) {
		s[i] = s2[j];
	}
	s[i] = '\0';

}

void strncnc(char s1[], char s2[], int n) {
	int i, j;
	for (i = 0; s1[i] != '\0'; i++);
	s1[i] = ' ';
	i++;
	for (i, j = 0; j < n && s2[j] != '\0'; j++, i++) {
		s1[i] = s2[j];
	}
	s1[i] = '\0';

}
void strcpy(char s3[], char s4[]) {
	int i;
	for (i = 0; s4[i] != '\0'; i++) {
		s3[i] = s4[i];
	}
	s3[i] = '\0';

}
void strncpy(char s3[], char s4[], int n) {
	int i;
	for (i = 0; i < n && s4[i] != '\0'; i++) {
		s3[i] = s4[i];
	}
	s3[i] = '\0';
}
int strcmp(char s1[], char s2[]) {
	int i;
	for (i = 0; s1[i] != '\0'; i++) {
		if (s1[i] > s2[i])
			return 1;
		else if (s1[i] < s2[i])
			return -1;
	}
	if (s1[i] == '\0' && s2[i] != '\0')
		return -1;
	else if (s1[i] == '\0' && s2[i] == '\0')
		return 0;
}
int strncmp(char s1[], char s2[], int n) {
	int i;
	for (i = 0; i<n&&s1[i] != '\0'; i++) {
		if (s1[i] > s2[i])
			return 1;
		else if (s1[i] < s2[i])
			return -1;
	}
	if (i==n)
		return 0;
}
//String comapare for i
int stricmp(char s1[], char s2[]) {
	int i;
	for (i = 0; s1[i] != '\0'; i++) {
		if (s1[i] == s2[i] || s1[i] == (s2[i] + 32) || s1[i] ==(s2[i] - 32)) {
			continue;
		}
		if (s1[i] > s2[i]&&s1[i]!=(s2[i]+32)||s1[i]!=(s2[i]-32))
			return 1;
		else if (s1[i] < s2[i] || s1[i]!=(s2[i] + 32) || s1[i] != (s2[i] - 32))
			return -1;
	}
	if (s1[i] == '\0' && s2[i] != '\0')
		return -1;
	else if (s1[i] == '\0')
		return 0;
	else if (s1[i] == '\0' && s2[i] == '\0')
		return 0;
}
