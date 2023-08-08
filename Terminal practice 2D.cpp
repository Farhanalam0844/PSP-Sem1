#include<iostream>
#include<iomanip>
using namespace std;
int const row = 3;
int const col = 3;
//Input 2D Array Function prototype
void INPUT_MATRIX(int [][col],int);
//Output Function Prototype
void OUTPUT_MATRIX(int [][col], int);
//Transpose of Matrix Function Prototype
void TRANSPOSE_MATRIX(int [][col], int);
//Diagonal of matrix Function Prototype
void DIAGONAL_MATRIX(int [][col],int);
//Simple Diagonal of matrix
void DIAGONAL_MATRIX_2(int [][col], int);
//Addition of two matrices
void ADD_MATRIX(int [][col], int[][col],int [][col], int);
//Substraction of two matrices
void SUB_MATRIX(int[][col], int[][col], int[][col], int);
//Insert Row Function
void  INSERT_ROW_FUNCTION(int [][col],int& ,int );
int main() {
//2D array Declaration
	int matrix[row][col];
//Input Function
	cout << "\n***INPUT MATRIX\n\n";
	INPUT_MATRIX(matrix, row);
//Output Function
	cout << "\n***OUTPUT MATRIX***\n\n";
	OUTPUT_MATRIX(matrix, row);
//Transpose of Matrix
	cout << "\n***TRANSPOSE MATRIX***\n\n";
	TRANSPOSE_MATRIX(matrix, row);
	//Output Function
	OUTPUT_MATRIX(matrix, row);
//Diagonal of matrix
	cout << "\n***DIAGONAL MATRIX***\n\n";
	DIAGONAL_MATRIX(matrix, row);
	//Output Diagonal of matrix Function
	//OUTPUT_MATRIX(matrix, row);
//Simple Diagonal of matrix
	cout << "\n***DIAGONAL WITHOUT SPACES MATRIX***\n\n";
	DIAGONAL_MATRIX_2(matrix, row);
//Addition of matrices 
	cout << "\n***ADDITION OF MATRICES***\n\n";
	int matrix2[row][col],matrix3[row][col];
	cout << "Enter values for Matrix 2 : " << endl;
	INPUT_MATRIX(matrix2, row);
	cout << "Matrix 2 : " << endl;
	OUTPUT_MATRIX(matrix2, row);
	ADD_MATRIX(matrix, matrix2,matrix3, row);
	//Output addition matrix
	cout << "Summation Matrix is : " << endl;
	OUTPUT_MATRIX(matrix3, row);
//Substraction of matrices
	cout << "\n***SUBSTRACTION OF MATRICES***\n\n";
	SUB_MATRIX(matrix, matrix2, matrix3, row);
	//Output addition matrix
	cout << "Substracted matrix is : " << endl;
	OUTPUT_MATRIX(matrix3, row);
//Insert Function 
	cout << "\n***INSERT FUNCTION***\n\n";
	int ind,c_size = 3;
	cout << "Enter the row index you want to add : ";
	cin >> ind;
	INSERT_ROW_FUNCTION(matrix, c_size,ind);
	cout << "New matrix is : " << endl;
//	OUTPUT_MATRIX(matrix, c_size);
}
//Input Function
void INPUT_MATRIX(int m[][col], int r ) {
	int i, j;
	for (i = 0; i < r; i++) {
		for (j = 0; j < col; j++) {
			cout  << "Enter value in Matrix : [" << i << "][" << j << "] : ";
			cin >> m[i][j];
		}
	}
}
//Output Function Prototype
void OUTPUT_MATRIX(int m[][col], int r) {
	int i, j;
	for (i = 0; i < r; i++) {
		for (j = 0; j < col; j++) {
			cout << setw(4) << m[i][j];
		}cout << endl;
	}
}
//Transpose of Matrix Function 
void TRANSPOSE_MATRIX(int m[][col], int r) {
	int i, j;
	for (i = 0; i < r; i++) {
		for (j = i; j < col; j++) {
			int temp = m[i][j];
			m[i][j] = m[j][i];
			m[j][i] = temp;
		}
	}

}
//Diagonal of matrix Function Prototype
void DIAGONAL_MATRIX(int m[][col], int r) {
	int i, j;
	for (i = 0; i < r; i++) {
		for (j = 0; j < col; j++) {
			if (i == j)
				cout << setw(4) << m[i][j];
			else
				cout << setw(4) << "\t";
		}cout << endl;
	}
}
//Simple Diagonal of matrix
void DIAGONAL_MATRIX_2(int m[][col], int r) {
	int i;
	for (i = 0; i < r; i++) {
		cout << setw(4) << m[i][i];
	}
}
//Addition of two matrices
void ADD_MATRIX(int m1[][col], int m2[][col],int m3[][col], int r) {
	int i, j;
	for (i = 0; i < r; i++) {
		for (j = 0; j < col; j++) {
			m3[i][j] = m1[i][j] + m2[i][j];
		}
	}
}
//Substraction of two matrices
void SUB_MATRIX(int m1[][col], int m2[][col], int m3[][col], int r) {
	int i, j;
	for (i = 0; i < r; i++) {
		for (j = 0; j < col; j++) {
			m3[i][j] = m1[i][j] - m2[i][j];
		}
	}
}
//Insert Row Function
void  INSERT_ROW_FUNCTION(int m[][col], int& n,int ind) {
	int i, j;
	n++; 
	for (j = n-1; j >= ind; j--) {
		for (i = 0; i < col; i++) {
			m[j][i] = m[j - 1][i];
		}
		
}//n++;
	cout << "Enter the row : ";
	for (i = 0; i < col; i++) {
		cin >> m[ind][i];
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < col; j++) {
			cout << m[i][j] << '\t';
		}cout << endl;
	}
}
