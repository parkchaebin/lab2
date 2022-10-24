/*matrix_vector.cpp*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int row;
	int col;

	cout << "row : ";
	cin >> row;
	cout << "col : ";
	cin >> col;

	vector<vector<int>> matrix1(col);
	vector<vector<int>> matrix2(col);
	vector<vector<int>> res(col);

	int i=0;
	int j=0;
	int val;

	for(i=0; i<row; i++) {
		matrix1[i] = vector<int>(row);
		matrix2[i] = vector<int>(row);
		res[i] = vector<int>(row);
	}

	cout << "One Matrix\n";
	for(i=0; i<row; i++) {
		for(j=0; j<col; j++) {
			cin >> val;
			matrix1[i][j] = val;
		}
	}

	cout << "Two Matrix\n";
	for(i=0; i<row; i++) {
		for(j=0; j<col; j++) {
			cin >> val;
			matrix2[i][j] = val;
		}
	}

	cout << "One Matrix + Two Matrix\n";
	for(i=0; i<row; i++) {
		for(j=0; j<col; j++) {
			res[i][j] = matrix1[i][j] + matrix2[i][j];
			cout<< res[i][j];
		}
		cout << endl;
	}
return 0;	
}
