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