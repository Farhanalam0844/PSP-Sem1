#include<iostream>
#include<string>
using namespace std;
const int SIZE = 3;
const int Col = 20;
void INPUT_FUNCT(char[][Col], char[][Col], double []);
void DISPLAY_FUNCT(char [][Col],char [][Col], double []);
int main() {	
	char name[SIZE][Col];
	char desig[SIZE][Col];
	double sal[SIZE];
	INPUT_FUNCT(name, desig, sal);
	DISPLAY_FUNCT(name, desig, sal);
}
void INPUT_FUNCT(char n[][Col], char d[][Col], double s[]) {
	int i;
	for (i = 0; i < SIZE; i++) {
		cout << "Enter name of Employ : " << i + 1 << " : ";
		cin >> n[i];
	//	getline(cin,n[i]);
		//cin.ignore(100, '\n');
		//cin.get(n[i],SIZE,'\n');
		//cin.ignore(100,'\n');
		cout << "Enter Designation of this Employ : " ;
		cin >> d[i];
		//cin.get(d[i], SIZE, '\n');
		//cin.ignore(100, '\n');
		cout << "Enter Salary of this Employ : ";
		cin >> s [i];
		//cin.ignore(100, '\n');
	}
}
void DISPLAY_FUNCT(char n[][Col], char d[][Col], double s[]) {
	int i;
	for (i = 0; i < SIZE; i++) {
		if (s[i] < 250000.0 && s[i]>100000.0) {
			cout << "Employ is : " << n[i] << endl;
			cout << "Designation of his/her is : " << d[i] << endl;
			cout << "Salary is : " << s[i];
		}
	}
}