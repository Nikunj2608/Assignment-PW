#include <iostream>
#include <algorithm>
#include <vector>

int findMinimumSum(std::vector<int>& digits) {
    std::sort(digits.begin(), digits.end());
    int num1 = 0, num2 = 0;
    bool isNum1 = true;

    for (int i = digits.size() - 1; i >= 0; i--) {
        if (isNum1) {
            num1 = num1 * 10 + digits[i];
        } else {
            num2 = num2 * 10 + digits[i];
        }
        isNum1 = !isNum1;
    }

    return num1 + num2;
}

int main() {
    std::vector<int> digits = {1, 2, 3, 4, 5};
    int minimumSum = findMinimumSum(digits);
    std::cout << "Minimum possible sum: " << minimumSum << std::endl;

    return 0;
}