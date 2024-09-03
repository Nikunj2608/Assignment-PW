#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void printDiagonals(int matrix[MAX_SIZE][MAX_SIZE], int size) {
     cout << "Main Diagonal: ";
    for (int i = 0; i < size; i++) {
        cout << matrix[i][i] << " ";
    }
    cout << endl;

    cout << "Secondary Diagonal: ";
    for (int i = 0; i < size; i++) {
        cout << matrix[i][size - i - 1] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter the size of the square matrix: ";
    cin >> size;

    int matrix[MAX_SIZE][MAX_SIZE];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> matrix[i][j];
        }
    }

    printDiagonals(matrix, size);

    return 0;
}