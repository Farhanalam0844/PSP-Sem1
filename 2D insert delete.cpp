#include<iostream>
using namespace std;
int main() {
	const	int row = 5;
	const	int col = 5;
	int arr[row][col];
	int r = 3, c = 3, i, j;
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			cout << "Enter value in : ";
			cin >> arr[i][j];
		}
	}
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			cout << arr[i][j] << '\t';
		}cout << endl;
	}
	int ind;
	cout << "Enter row index : ";
	cin >> ind;
	for (j = 0; j < c; j++) {

		for (i = r; i > ind; i--) {
			arr[i][j] = arr[i - 1][j];
		}
	}
	for (i = 0; i < c; i++) {
		cout << "Enter value in matrix : [" << ind << "][" << i << "] : ";
		cin >> arr[ind][i];
	}r++;

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			cout << arr[i][j] << '\t';
		}cout << endl;
	}
	cout << "Enter index to delete : ";
	cin >> ind;
	int ro = 4, co = 3;
	for (j = 0; j < c; j++) {
		for (i = ind; i < r; i++) {
			arr[i][j] = arr[i + 1][j];

		}
		r--;
		for (i = 0; i < r; i++) {
			for (j = 0; j < c; j++) {
				cout << arr[i][j] << '\t';
			}cout << endl;
		}
		cout << "Enter index to add as col : ";
		cin >> ind;
		for (i = 0; i < r; i++) {
			for (j = c; j > ind; j--) {
				arr[i][j] = arr[i][j - 1];
			}
		}
		for (i = 0; i < r; i++) {
			cout << "Enter value in matrix : [" << i << "][" << ind << "] : ";
			cin >> arr[i][ind];
		}c++;
		for (i = 0; i < r; i++) {
			for (j = 0; j < c; j++) {
				cout << arr[i][j] << '\t';
			}cout << endl;
		}



		//c--;
		cout << "Enter index you want to delete : ";
		cin >> ind;
		for (i = 0; i < r; i++) {
			for (j = ind; j < c; j++) {
				arr[i][j] = arr[i][j + 1];
			}
		}
		c--;
		for (i = 0; i < r; i++) {
			for (j = 0; j < c; j++) {
				cout << arr[i][j] << '\t';
			}cout << endl;
		}
	}
}