#include <iostream>
#include <vector>

int main() {
    
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int maxSum = 0;
    int maxRow = -1;

    for (int i = 0; i < matrix.size(); i++) {
        int sum = 0;

        for (int j = 0; j < matrix[i].size(); j++) {
            sum += matrix[i][j];
        }

        if (sum > maxSum) {
            maxSum = sum;
            maxRow = i;
        }
    }

    std::cout << "Row number with maximum sum: " << maxRow << std::endl;

    return 0;
}