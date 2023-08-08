#include<iostream>
using namespace std;
int main() {
	const int size = 4;
	// Declaration of Array
	int arr[size];
	int i, j;
	// Input of Array
	for (i = 0; i < size; i++) {
		cout << "Enter value in Array : [" << i << "] : ";
	 	cin>> arr[i];
	}
	// Bubble Sort
	cout << "***Bubble Sort***\n";
	for (i = 0; i < size - 1; i++) {
		for (j = i+1; j >i; j--) {
			if (arr[i+1] < arr[i]) {
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
	}
	// Output of Array
	for (i = 0; i < size; i++) {
		cout << "value in Array : [" << i << "] is : ";
		cout << arr[i] <<endl;
	}
	cout << "***Selection Sort***\n";
	// Input of Array
	for (i = 0; i < size; i++) {
		cout << "Enter value in Array : [" << i << "] : ";
		cin >> arr[i];
	}
	// Selection Sort 
	for (i = 0; i < size-1; i++) {
		for (j = i+1; j < size; j++) {
			if (arr[j] < arr[i]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	// Output of Array
	for (i = 0; i < size; i++) {
		cout << "value in Array : [" << i << "] is : ";
		cout << arr[i] << endl;
	}








	




}