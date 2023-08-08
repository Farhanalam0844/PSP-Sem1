#include<iostream>
using namespace std;
const int Size = 7;
int main() {
	// Binary Search
	// Applicable only for sorted array and efficient for sorted array only
	cout << "Binary Search : " << endl << endl;
	int arr[Size];
	cout << "Enter Sorted array" << endl;
	for (int i = 0; i < Size; i++) {
		cout << "Enter value is arr[" << i << "] : ";
		cin >> arr[i];
	}
	int val;
	cout << "Enter the value you want to search " << endl;
	cin >> val;
	int first = 0, last = Size - 1,mid;
	while (first <= last) {
		mid = (first + last) / 2;
		if (arr[mid]==val) {
			cout << "value exists in index " << mid << endl;
			break;
		}
		else if (val > mid)
			first = mid + 1;
		else if (val < mid)
			last = mid - 1;
		
	}
	// if value does not exist in array
	if (first > last) {
		cout << "Value does not exist in array " << endl;
	}*/
	cout << "\n \n \n";
	// Buuble Sort
	cout << "Bubble sort " << endl;
	cout << "Enter unsorted array " << endl;
	int i, j, temp,list[Size];
	for (i = 0; i < Size; i++) {
		cout << "Enter value in list[" << i << "] : ";
		cin >> list[i];
	}
	
	for ( i = 0; i < Size - 1; i++) {
		for(j = Size-1; j >i; j--) {
			if (list[j] < list[i]) {
				temp = list[j];
				list[j] = list[i];
				list[i] = temp;
			}
		}
	}
	for (j = 0; j <Size; j++) {
		cout << list[j] << endl;
	}
}