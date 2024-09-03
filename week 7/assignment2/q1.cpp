#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::string reverse = input;
    std::reverse(reverse.begin(), reverse.end());

    std::string concatenated = input + reverse;
    std::cout << "Concatenated string: " << concatenated << std::endl;

    return 0;
}