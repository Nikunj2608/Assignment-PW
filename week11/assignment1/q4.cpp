#include <iostream>

int countWays(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else if (n == 2) {
        return 2;
    } else {
        return countWays(n - 1) + countWays(n - 2) + countWays(n - 3);
    }
}

int main() {
    int n;
    std::cout << "Enter the number of stairs: ";
    std::cin >> n;
    std::cout << "Number of ways to reach the top: " << countWays(n) << std::endl;
    return 0;
}