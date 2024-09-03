#include<iostream>
using namespace std;
int main()
{
	int n, m;
	cout << "Enter the number of rows (n): ";
	cin >> n;
	cout << "Enter the number of columns (m): ";
	cin >> m;

	int A[n][m];
	cout << "Enter the elements of the matrix A:" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "Enter element at position (" << i << ", " << j << "): ";
			cin >> A[i][j];
		}
	}

	int l1, r1, l2, r2;
	cout << "Enter the coordinates (l1, r1) and (l2, r2): ";
	cin >> l1 >> r1 >> l2 >> r2;

	int sum = 0;
	for (int i = l1; i <= l2; i++) {
		for (int j = r1; j <= r2; j++) {
			sum += A[i][j];
		}
	}

	cout << "Sum of the rectangle from (" << l1 << ", " << r1 << ") to (" << l2 << ", " << r2 << ") is: " << sum << endl;

	return 0;
}
    