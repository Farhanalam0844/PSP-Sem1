#include<iostream>
using namespace std;
int main() {
	const int r = 3;
	const int c = 3;
	int row = 3;
	int col = 3;
	int a[r][c];
	int i, j,ind;
	for (i = 0; i <= row; i++) {
		for (j = 0; j < col; j++) {
			cin>> a[i][j];
		}
	}
	cout << "Enter index you want value in  : ";
	cin >> ind;
	for (i = row; i >=ind; i--) {
		for (j = 0; j < col; j++) {
			a[row + 1][j] = a[row][j];
		}
	}
	row++;
	for (i = 0; i <=row; i++) {
		for (j = 0; j < col; j++) {
			cout<<a[i][j];
		}
	}
}