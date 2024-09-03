#include <iostream>
#include <string>

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int countVowelSubstrings(const std::string& str) {
    int count = 0;
    int n = str.length();

    for (int i = 0; i < n; i++) {
        if (isVowel(str[i])) {
            count += (n - i) * (i + 1);
        }
    }

    return count;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;

    int result = countVowelSubstrings(str);
    std::cout << "Number of substrings containing only vowels: " << result << std::endl;

    return 0;
}