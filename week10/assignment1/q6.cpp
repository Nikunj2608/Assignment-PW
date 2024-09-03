#include <iostream>
#include <cmath>

int calculateCompleteRows(int n) {
    int completeRows = (int)(sqrt(2 * n + 0.25) - 0.5);
    return completeRows;
}

int main() {
    int n;
    std::cout << "Enter the number of coins: ";
    std::cin >> n;

    int completeRows = calculateCompleteRows(n);
    std::cout << "Number of complete rows: " << completeRows << std::endl;

    return 0;
}