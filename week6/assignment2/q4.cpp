#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> matrix(n, vector<int>(n, 0));
    int num = 1;
    int rowStart = 0, rowEnd = n - 1;
    int colStart = 0, colEnd = n - 1;

    while (rowStart <= rowEnd && colStart <= colEnd) {
        // Traverse right
        for (int i = colStart; i <= colEnd; i++) {
            matrix[rowStart][i] = num++;
        }
        rowStart++;

        // Traverse down
        for (int i = rowStart; i <= rowEnd; i++) {
            matrix[i][colEnd] = num++;
        }
        colEnd--;

        // Traverse left
        if (rowStart <= rowEnd) {
            for (int i = colEnd; i >= colStart; i--) {
                matrix[rowEnd][i] = num++;
            }
            rowEnd--;
        }

        // Traverse up
        if (colStart <= colEnd) {
            for (int i = rowEnd; i >= rowStart; i--) {
                matrix[i][colStart] = num++;
            }
            colStart++;
        }
    }

    return matrix;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<vector<int>> result = generateMatrix(n);

    cout << "Generated Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}