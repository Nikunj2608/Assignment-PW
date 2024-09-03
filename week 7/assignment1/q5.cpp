#include <iostream>

int stringToInt(const std::string& str) {
    int result = 0;
    int sign = 1;
    int i = 0;

    if (str[i] == '-') {
        sign = -1;
        i++;
    }

    for (; i < str.length(); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + (str[i] - '0');
        } else {
            // Invalid character encountered
            std::cout << "Invalid input!" << std::endl;
            return 0;
        }
    }

    return result * sign;
}

int main() {
    std::string input;
    std::cout << "Enter a string of length less than 10: ";
    std::cin >> input;

    int convertedInt = stringToInt(input);
    std::cout << "Converted integer: " << convertedInt << std::endl;

    return 0;
}