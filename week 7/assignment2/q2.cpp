#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string input;
    std::cout << "Enter a string consisting of digits from '0' to '9': ";
    std::cin >> input;

    std::sort(input.begin(), input.end(), std::greater<char>());

    char secondLargestDigit = input[1];

    std::cout << "The second largest digit is: " << secondLargestDigit << std::endl;

    return 0;
}