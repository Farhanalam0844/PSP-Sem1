#include<iostream>
using namespace std;
const int siz = 20;
//Input function prototype
void input_Array(int [],int);
//Insert function prototype
void INSERT_FUN(int [],int&,int);
//Delete Function Prototype
void DELETE_FUN(int [], int& ,int);
//To find in delete protoype
int find(int [], int,int);
//To find value and indexes
int FindAll(int [], int , int);
//To Reverse an array
void REVERSE_ARR(int [],int);
int main() {
	//Array declaration
	int arr[siz],currentsize;
	cout << "Enter no of elements you want to add in array : ";
	cin >> currentsize;
	//Validation of currentsize
	while (currentsize < 0 || currentsize>20) {
		cout << "It must be between 0 and 20 \nEnter again : ";
		cin >> currentsize;
	}
	//Input function
	input_Array(arr, currentsize);
	cout << "\t\t\tArray Operations\t\t\t\n" << "\t\t\t****************\t\t\t\n"
		<< "\t\tInsert\t: I/i\n" << "\t\tDelete \t: D/d\n"
		<< "\t\tFind  \t: F/f\n" << "\t\tReplace\t: R\r\n"
		<< "\t\tSwap  \t: S/s\n" << "\t\tReverse\t: V/v\n"
		<< "\t\tPrint \t: P/p\n" << "\t\tQuit   \t: Q/q\n";
	char choice;
	cout << "Enter Your choice : ";
	cin >> choice;
	int insert, delet,val,val2,x1,x2;
	switch (choice) {
	case 'I':
	case 'i':
	{
		cout << "Enter the position you want to add new value : ";
		cin >> insert;
		while (insert<0 || insert>currentsize) {
			cout << "! Invalid value \nEnter value again between"
				<< "0 to " << currentsize;
			cin >> insert;
		}
		INSERT_FUN(arr, currentsize, insert);
	}
	case 'D':
	case 'd':
	{
		cout << "Enter value you want to delete : ";
		cin >> delet;
		DELETE_FUN(arr, currentsize, delet);
	}
	case 'F':
	case 'f':
	{
		cout << "Enter value you want to search : ";
		cin >> val;

	int x=	FindAll(arr, currentsize, val);
	if (x == 0) {
		cout << "No is not present in array : ";
	}
	else
		cout << "Value is present on " << x << " indexes " << endl;
	}
	case 'R':
	case 'r':
	{
		cout << "Enter value you want to replace : ";
		cin >> val2;
		int z=find(arr, currentsize, val2);
		if (z == currentsize)
			cout << "Value not found " << endl;
		else
		{
			cout << "Now enter value to replace : ";
			cin >> arr[z];
		}
	}
	case 'S':
	case 's':
	{
		cout << "Enter two values you want to swap : " << endl;
		cout << "Enter first : ";
		cin >> x1;
		cout << "Now enter second : ";
		cin >> x2;
		int c=FindAll(arr, currentsize, x1);
		int v= FindAll(arr, currentsize, x2);
		if (c == currentsize)
			cout << "First value does not exist " << endl;
		if (v == currentsize)
			cout << "Second value does not exist " << endl;
		else
		{
			int temp = arr[c];
			arr[c] = arr[v];
			arr[v] = temp;
		}
	}
	case 'V':
	case 'v':
	{
		REVERSE_ARR(arr, currentsize);
	}
	case 'P':
	case 'p':
	{
		int i;
		for (i = 0; i < currentsize; i++) {
			cout << arr[i] << endl;
		}
	}
	}
}
//Input Array Function
void input_Array(int a[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		cout << "Enter value in Array [" << i << "] : ";
		cin >> a[i];
	}
}
//Insert index Function
void INSERT_FUN(int a[], int& n, int ins) {
	int i;
	for (i = n; i >= ins; i--) {
		a[i + 1] = a[i];
	}
	cout << "Now enter value : ";
	cin >> a[ins];
	n++;
}
//Delte Function 
void DELETE_FUN(int a[], int& n, int del) {
	//function call to find no and index
	int y = find(a, n,del);
	if (y == n)
		cout << "Error value not found " << endl;
	else {
		int i;
		for (i = y; i < n; i++) {
			a[i] = a[i + 1];
		}
		n--;
	}
	
}
//To find value in delete function
int find(int a[], int n,int d) {
	int i;
	for (i = 0; i < n; i++) {
		if (a[i] == d)
			return i;
	}
	if (i == n)
		return n;

}
//To find value and indexes
int FindAll(int a[], int n, int v) {
	int i, count = 0;
	bool b = false;
	for (i = 0; i < n; i++) {
		if (a[i] == v) {
			cout << "Value is in index " << i << endl;
			b = true;
			count++;
		}
		if (b == false)
			return 0;
		else return count;
	}
}void REVERSE_ARR(int a[], int n) {
		int i, j;
		for (i = 0, j = n; i <= (n / 2); j--,i++) {
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;

		}
	}