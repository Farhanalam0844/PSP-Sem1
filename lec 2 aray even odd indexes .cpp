#include<iostream>
using namespace std;
int Odd(int[] ,int ,int);
const int n = 7;
int main() {
	int arr[n];
	int i;
	for (i = 0; i < n; i++) {
		cout << "Enter value in arr[" << i << "] : ";
		cin >> arr[i];
	}for (i = 0; i < n; i++) {
		if(Odd(arr, n, i)) {
			cout << arr[i] << endl;
		}
	}
	
}
int Odd(int arr[], int n,int i){
	if ((i % 2) != 0) {
		return 1;
	}
	else return 0;
}