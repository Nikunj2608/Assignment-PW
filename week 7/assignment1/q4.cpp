#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Enter a string of even length: ";
    std::cin >> input;

    int length = input.length();
    if (length % 2 != 0) {
        std::cout << "Invalid input! Please enter a string of even length." << std::endl;
        return 0;
    }

    int halfLength = length / 2;
    for (int i = halfLength; i < length; i++) {
        std::swap(input[i], input[length - 1 - (i - halfLength)]);
    }

    std::cout << "Reversed string: " << input << std::endl;

    return 0;
}