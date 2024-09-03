#include <iostream>

int numberOfSteps(int num) {
    int steps = 0;
    while (num != 0) {
        if (num % 2 == 0) {
            num /= 2;
        } else {
            num -= 1;
        }
        steps++;
    }
    return steps;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    int steps = numberOfSteps(num);
    std::cout << "Number of steps to reduce " << num << " to zero: " << steps << std::endl;
    return 0;
}