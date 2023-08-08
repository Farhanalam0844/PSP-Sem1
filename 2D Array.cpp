#include<iostream>
using namespace std;
int main() {
	const int rows = 3, cols = 3;
	// 2D array initialization 
	// 2 brackets 1 inner bracket for one row and elements in that are cols 
	//elementts of that row
	int arr[rows][cols];
	//int arr[3][3] = { {1,2,3},{5,6,7},{9,10,11},{13,14,16} };
	// Input using loops
	// For 2D nested loop is used;
	int i, j;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			cout << "Enter value in Matrix : [" << i << "][" << j << "] ";
			cin >> arr[i][j];
		}
	}
	// Output 2D array using loop
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			cout << arr[i][j] << "\t";
		}cout << endl;
	}






	// Search is same as in 1D array
	int x;
	bool b = false;
	cout << "Enter value you want to search : ";
	cin >> x;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			if (arr[i][j] == x) {
				cout << "Value is in index " << "[" << i << "][" << j << "] ";
				b = true;
			}
		}
	}
	if (b)
		cout << "Value is present in Matrix " << endl;
	else
		cout << "Value is not present " << endl;
	// Spiral Output
	cout << "Spiral of 2D array " << endl << "******" << endl;
	int row_st = 0, col_st = 0, row_end = rows - 1, col_end = cols - 1;
	while (row_st < row_end && col_st < col_end) {
		// For  row_st
		for (int col = 0; col <= col_end; col++) {
			cout << arr[row_st][col] << ' ';
		}cout << "\t";
		row_st++;
		// For cols_end
		for (int row = row_st; row <= row_end; row++) {
			cout << arr[row][col_end] << ' ';
		}cout << "\t";
		col_end--;
		// For last row
		for (int col = col_end; col >= col_st; col--) {
			cout << arr[row_end][col] << ' ';
		}cout << "\t";
		row_end--;
		// For col_st
		for (int row = row_end; row >= row_st; row--) {
			cout << arr[row][col_st] << ' ';
		}cout << "\t";
		col_st++;
	}







}