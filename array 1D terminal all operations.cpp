#include<iostream>
using namespace std;
//const int Size = 5;
//Input Function Prototype
	void INPUT_ARRAY(int [], int);
//Output Function Protoype
	void OUTPUT_ARRAY(int [],int);
//Linear Search Function Prototype
	int LINEAR_SEARCH(int [],int,int);
//Selection Sort Function Prototype
	void SELECTION_SORT(int[], int);
//Binary Search Function Prototype
	int BINARY_SEARCH(int [], int, int);
//Bubble Sort Function Prototype 
	void BUBBLE_SORT(int [], int);
int main() {
	// 1D array all operations for PSP final
	//Creating 1D array input from user using function;
	const int Size = 5;
	//Array Declaration
	int arr[Size];
//Input Function
	cout << "***INPUT ARRAY***\n\n";
	INPUT_ARRAY(arr, Size);
//Output Function
	cout << "\n***OUTPUT ARRAY***\n\n";
	OUTPUT_ARRAY(arr, Size);
//Linear search
	cout << "\n***LINEAR SEARCH***\n\n";
	int key;
	cout << "Enter value you want to search : ";
	cin >> key;
	int x=LINEAR_SEARCH(arr, Size, key);
		//If Value is not present 
	if (x == -1)
		cout << "Value does not exist in Array " << endl;
		//If present print index
	else
		cout << "Value is present in index " << x <<
		" of Array " << endl;
//Selection Sort
	cout << "\n***SELECTION SORT***\n\n";
	SELECTION_SORT(arr, Size);
	//Output sorted array
	OUTPUT_ARRAY(arr, Size);
//Binary Search Function
	cout << "\n***BINARY SEARCH***\n\n";
	cout << "Enter value you want to Search in array : ";
	cin >> key;
	int y = BINARY_SEARCH(arr, Size, key);
	if (y == -1)
		cout << "Value is not present in Array " << endl;
	else
		cout << "Value is present at index : " << y << endl;
//Bubble Sort Function
	cout << "\n***BUBBLE SORT***\n\n";
	INPUT_ARRAY(arr, Size);
	cout << endl;
	BUBBLE_SORT(arr, Size);
	//Output sorted array
	OUTPUT_ARRAY(arr, Size);
}
//Input Function
void INPUT_ARRAY(int a[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		cout << "Enter value in Array : [" << i << "] : ";
		cin >> a[i];
	}
}
//Output Function Protoype
void OUTPUT_ARRAY(int a[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		cout << "value in Array : [" << i << "] is : "<<a[i]<<endl;
	}
}

//Linear Search Function
int LINEAR_SEARCH(int a[], int n, int val) {
	int i;
	//int count = 0;
	for (i = 0; i < n; i++) {
		if (a[i] == val) {
			//If you want to know no of indexes it is present in
			//Use count and return count after end of loop
			//count++;
			return i;
		}
			
	}
	if (i == n)
		return -1;
}
//Selection Sort Function Header
void SELECTION_SORT(int a[], int n) {
	int i, j;
		for (i = 0; i < n - 1; i++) {
			for (j = n-1; j >i; j--) {
				if (a[j] < a[i])
				{
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
}
//Binary Search Function Header
int BINARY_SEARCH(int a[], int n, int val) {
	int start = 0, last = n - 1;
	int mid = (start + last) / 2;
	while (start <= last) {
		mid = (start + last) / 2;
		if (a[mid] == val)
			return mid;
		else if (a[mid] > val)
			last = mid - 1;
		else // arr[mid]<val
			start = mid + 1;
	}
	if (start > last)
		return -1;
}
//Bubble Sort Function Prototype 
void BUBBLE_SORT(int a[], int n) {
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = i; j < n;j++) {
			if (a[j+1] < a[j]) {
				int temp = a[j+1];
				a[j+1] = a[j];
				a[j] = temp;
			}
		}
	}
}
