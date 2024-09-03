#include <iostream>
#include <vector>

int findMaxOnesRow(const std::vector<std::vector<int>>& matrix) {
    int maxOnesRow = 0;
    int maxOnesCount = 0;

    for (int i = 0; i < matrix.size(); i++) {
        int onesCount = 0;
        for (int j = 0; j < matrix[i].size(); j++) {
            if (matrix[i][j] == 1) {
                onesCount++;
            } else {
                break; // Since the rows are sorted, we can break if we encounter a 0
            }
        }

        if (onesCount > maxOnesCount) {
            maxOnesCount = onesCount;
            maxOnesRow = i;
        }
    }

    return maxOnesRow;
}

int main() {
    std::vector<std::vector<int>> matrix = {
        {0, 1, 1, 1},
        {0, 0, 1, 0},
        {1, 1, 1, 1},
        {0, 0, 0, 0}
    };

    int maxOnesRow = findMaxOnesRow(matrix);
    std::cout << "Row with maximum number of 1's: " << maxOnesRow << std::endl;

    return 0;
}