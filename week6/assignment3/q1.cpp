#include <iostream>
#include <vector>

void setZeroes(std::vector<std::vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();

    std::vector<bool> rows(m, false);
    std::vector<bool> cols(n, false);

    // Mark the rows and columns that contain 0's
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 0) {
                rows[i] = true;
                cols[j] = true;
            }
        }
    }

    // Set the entire row and column to 0's
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (rows[i] || cols[j]) {
                matrix[i][j] = 0;
            }
        }
    }
}

int main() {
    // Example usage
    std::vector<std::vector<int>> matrix = {{1, 1, 1},
                                            {1, 0, 1},
                                            {1, 1, 1}};

    setZeroes(matrix);

    // Print the modified matrix
    for (const auto& row : matrix) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}