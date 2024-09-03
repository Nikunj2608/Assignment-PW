#include <iostream>
using namespace std;

void printMatrixInWaveForm(int matrix[][100], int rows, int columns) {
    for (int j = 0; j < columns; j++) {
        if (j % 2 == 0) {
             for (int i = rows - 1; i >= 0; i--) {
                cout << matrix[i][j] << " ";
            }
        } else {
            
            for (int i = 0; i < rows; i++) {
                cout << matrix[i][j] << " ";
            }
        }
    }
}

int main() {
    int rows, columns;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;

    int matrix[100][100];
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Matrix in wave form: ";
    printMatrixInWaveForm(matrix, rows, columns);

    return 0;
}