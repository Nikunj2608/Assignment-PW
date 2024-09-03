#include <iostream>

bool isPowerOfTwo(int n) {
    if (n == 1) {
        return true;
    }
    if (n % 2 != 0 || n == 0) {
        return false;
    }
    return isPowerOfTwo(n / 2);
}

int main() {
    int num;
    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    if (isPowerOfTwo(num)) {
        std::cout << num << " is a power of 2." << std::endl;
    } else {
        std::cout << num << " is not a power of 2." << std::endl;
    }

    return 0;
}