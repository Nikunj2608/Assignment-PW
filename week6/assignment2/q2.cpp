#include <iostream>
#include <vector>

void rotateMatrix(std::vector<std::vector<int>>& matrix) {
    int n = matrix.size();
    
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            std::swap(matrix[i][j], matrix[j][i]);
        }
    }
    
    for (int i = 0; i < n; i++) {
        int start = 0;
        int end = n - 1;
        while (start < end) {
            std::swap(matrix[i][start], matrix[i][end]);
            start++;
            end--;
        }
    }
}

int main() {
    int n;
    std::cout << "Enter the size of the matrix: ";
    std::cin >> n;
    
    std::vector<std::vector<int>> matrix(n, std::vector<int>(n));
    
    std::cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> matrix[i][j];
        }
    }
    
    rotateMatrix(matrix);
    
    std::cout << "Matrix after rotation:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
    
    return 0;
}