#include<iostream>
using namespace std;
const int row = 3;
const int col = 3;
// Get TOtal Function Prototype
int getTotal(int [][col], int);
// Get Average Function Prototype
int getAvg(int [][col], int,int);
int main() {
	int i, j;
	int arr[row][col];
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			cout << "Enter value in Marix [" << i << "][" << j
				<< "] : ";
			cin >> arr[i][j];
		}
	}
// Get TOtal
	int tot = getTotal(arr, row);
	cout<<"Total of Matrix is : "<<tot<<endl;
// Get Average
	int avg = getAvg(arr, row, tot);
	cout << "Average of Matrix is : " <<avg<< endl;






}
// Get TOtal Function Prototype
int getTotal(int m[][col], int r) {
	int i, j,tot=0;
	for (i = 0; i < r; i++) {
		for (j = 0; j < col; j++) {
			tot += m[i][j];
		}
	}
	return tot;
}
// Get Average Function 
int getAvg(int m[][col], int r,int tot) {
	int avg = tot / (r * col);
	return avg;
}
