#include <iostream>

int sumOfOddNumbers(int a, int b) {
    if (a > b) {
        return 0;
    }
    if (a % 2 != 0) {
        return a + sumOfOddNumbers(a + 2, b);
    }
    return sumOfOddNumbers(a + 1, b);
}

int main() {
    int a, b;
    std::cout << "Enter the value of a: ";
    std::cin >> a;
    std::cout << "Enter the value of b: ";
    std::cin >> b;
    std::cout << "Sum of odd numbers from " << a << " to " << b << " is: " << sumOfOddNumbers(a, b) << std::endl;
    return 0;
}