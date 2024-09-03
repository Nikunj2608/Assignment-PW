#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;

    int n = str.length();
    for (int i = 0; i < n; i++) {
        if (i % 2 != 0) {
            str[i] = '#';
        }
    }

    std::cout << "Updated string: " << str << std::endl;

    return 0;
}