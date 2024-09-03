#include <iostream>
#include <cmath>

bool isPerfectSquare(int n) {
    int root = sqrt(n);
    return (root * root == n);
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    if (isPerfectSquare(n)) {
        std::cout << n << " is a valid perfect square." << std::endl;
    } else {
        std::cout << n << " is not a valid perfect square." << std::endl;
    }

    return 0;
}