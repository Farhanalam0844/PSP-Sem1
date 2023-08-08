#include<iostream>
using namespace std;
//int Sum_Array(int[][cols] ,int ,int);
int main() {
	const int rows = 3, cols = 3,n=3;
	int matrix[rows][cols];
	// Range based loop 
	// only for display values in order to change use by reference 
	int arr[n] = {1,2,3};
	for (int val: arr) {
		cout << val<<' ';
	}
	cout << endl << "******" << endl;

	// For addition or substraction we create 2 2d arrays
	// First array (2D)
	int i, j;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			cout << "Enter value of Matrix (1) [" << i << "]["
				<< j << "] : ";
			cin >> matrix[i][j];
		}
	}
	//Display 1st array
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			cout << matrix[i][j] << "\t";
		}cout << endl;
	}
	cout << endl;
	// For second array (2d)
	/*int matrix2[rows][cols];
	cout <<"For second matrix\n******\n ";
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			cout << "Enter value in Matrix (2) [" << i << "]["
				<< j << "] : ";
			cin >> matrix2[i][j];
		}
	}
	//Display 2nd array
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			cout << matrix2[i][j] << "\t";
		}cout << endl;
	}
	cout << endl;
	//Sum_Array(matrix[][cols],rows,cols );
	//Sum of two arrays
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			matrix[i][j] = matrix[i][j] + matrix2[i][j];
		}
	}
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			cout << matrix[i][j] << "\t";
		}cout << endl;
	}cout << endl;
	*/
	// TRANSPOSE of a matrix
	for (i = 0; i <= 1; i++) {
		for (j = 0; j <1; j++) {
			matrix[i][j] = matrix[j][i];
		}
	}
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols;j++){
			cout<<matrix[i][j]<<"\t";
		}
	}



}
//int Sum_Array(int matrix[][cols],int r,int c) {

//}