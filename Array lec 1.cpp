#include<iostream>
using namespace std;
int main() {
	// Array Declaration And assigining values
	const int n = 5;
	int list[n] = { 3,6,7,8,4 };
	// Output
	cout << list[0] << endl;
	cout << list[1] << endl;
	cout << list[2] << endl;
	cout << list[3] << endl;
	cout << list[4] << endl;
	// input and output using loop
	int list1[n];
	for (int i = 0; i < n; i++) {
		cout << "Enter value in : list1 [" << i << "]" << endl;
		cin>> list1[i];
	}
	//Searching in Arrays 
	//1 : linear Search 
	//2 : Binary Search
	// linear Search
	int val;
	cout << "Enter the value you want to search the index : " << endl;
	cin >> val;
	for (int i = 0; i < n; i++) {
			if (val==list1[i])
			{	cout <<"Value is in index "<< i << endl;
		break;
	}
	}
	// if value is not present 
	cout << "If value is not present \n " << endl;
	int j;
	do {
		cout << "Enter value to search " << endl;
		cin >> val;
		int i;
		for (i = 0; i < n; i++) {
			if (list1[i] == val) {
				cout <<"Value is in index "<< i << endl;
				break;
			}

		}
		//condition
		if (i == n) {
			cout << "Value is not present in Array " << endl;
		}
		cout << "Enter any number except 0 to find index again " << endl;
		cin >> j;
	} while (j != 0);
	// For more than one index
	cout << "For more than 1 indexes " << endl;
	cout << "Enter values in array and search again to get no of indexes and indexes " << endl;
	int i;
	for (i = 0; i < n; i++) {
		cout << "Enter value in : list1[  " << i << "]" << endl;
		cin >> list1[i];
	}
	cout << "Enter number to search in array " << endl;
	cin >> val;
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (list1[i] == val) {
			cout <<"Value is in index "<< i << endl;
			count = count + 1;
		}
	}
	if (count > 1) {
		cout << "The number is presented on " << count << " indexes" << endl;
	}
	// From more indexes lowest index is same without count
	// For highest index loop will start from n-1 to 0
	cout << "To find highest index " << endl;
	for (i = 0; i < n; i++) {
		cout << "Enter value in List[" << i << "]" << endl;
		cin >> list1[i];
	}
	cout << "Enter value to search to find highest index " << endl;
	cin >> val;
	for (i = (n - 1); i >= 0; i--) {
		if (list1[i] == val) {
			cout << "Values (Highest) index " << i << endl;
		}
	}
	
	// To find maximum and minimun values in array and mid
	cout << "To find maximum,minimum and average " << endl;
	int arr[n];
	for (i = 0; i < n; i++) {
		cout << "Enter value in arr[" << i << "]" << endl;
		cin >> arr[i];
	}
	int max = INT_MIN;
	int min = INT_MAX;
	for (i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	cout << "Maximum value is " << max << endl << "Minimun value is " << min << endl;
	int sum = 0;
	double avg;
	for (i = 0; i < n; i++) {
		sum = sum + arr[i];
	}
	avg = double(sum /n);
	cout << "Average is " << avg << endl;
}
