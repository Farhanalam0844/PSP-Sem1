#include<iostream>
using namespace std;
int main() {
	const int r1 = 3;
	const int r2 = 3;// c1=r2 as necessary for multiplication
	const int c1 = 3;
	const int c2 = 3;
	int m1[r1][c1];
	int m2[r2][c2];
	int m3[r1][c2];
	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c1; j++) {
			cin >> m1[i][j];
		}
	}
	for (int i = 0; i < r2; i++) {
		for (int j = 0; j < c2; j++) {
			cin >> m2[i][j];
		}
	}
	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c2; j++) {
			m3[i][j] = 0;
			for (int k = 0; k < c2; k++) {
				m3[i][j] += m1[i][k] * m2[j][k];
			}
		}
	}
	for (int i = 0; i < r2; i++) {
		for (int j = 0; j < c2; j++) {
			cout << m3[i][j] << '\t';
		}cout << endl;
	}


}
/*
	const int row1 = 3;
	const int col1 = 3;
	// Declaration of  2D array
	int arr1[row1][col1];
	int i, j;
	//Input of first loop
	for (i = 0; i<row1; i++) {
		for (j = 0; j < col1; j++) {
			cout << "Enter value in Matrix 1 : [" << i << "][" << j << "] : ";
			cin >> arr1[i][j];
		}
	}
	// Transpose
	for (i = 0; i < row1; i++) {
		for (j = i; j < col1; j++) {
			int temp = arr1[i][j];
			arr1[i][j] = arr1[j][i];
			arr1[j][i] = temp;

		}
	}
	//print transpose
	cout << "Transpose of Matrix \n******\n";
	for (i = 0; i < row1; i++) {
		for (j = 0; j < col1; j++) {
			cout << arr1[i][j] << '\t';
		}cout << endl;
	}

	/*
	// output array1
	for (i = 0; i < row1; i++) {
		for (j = 0; j < col1; j++) {
			cout << arr1[i][j] << '\t';
		}cout << endl;
	}
		//Input 2nd 2D array
	for (i = 0; i < row2; i++) {
		for (j = 0; j < col2; j++) {
			cout << "Enter value in Matrix 2 : [" << i << "][" << j << "] : ";
			cin >> arr2[i][j];
		}
	}
	// Output 2nd array
	for (i = 0; i < row2; i++) {
		for (j = 0; j < col2; j++) {
			cout << arr2[i][j] << '\t';
		}cout << endl;
	}
	int mult[row1][col2];
	// if cols of first matrix is equal to rows of second
	for (i = 0; i < row1; i++) {
		for (j = 0; j < col2; j++) {
			mult[i][j] = 0;
			mult[i][j] += arr1[i][j] * arr2[i][j];
		}
	}
	for (i = 0; i < row1; i++) {
		for (j = 0; j < col2; j++) {
			cout << mult[i][j] << ' ';
		}cout << endl;
	}
	*/