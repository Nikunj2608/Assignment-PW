#include <iostream>
#include <string>
#include <sstream>

std::string findMaxWord(const std::string& sentence) {
    std::istringstream iss(sentence);
    std::string word, maxWord;

    while (iss >> word) {
        if (word > maxWord) {
            maxWord = word;
        }
    }

    return maxWord;
}

int main() {
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    std::string maxWord = findMaxWord(sentence);
    std::cout << "The lexicographically maximum word is: " << maxWord << std::endl;

    return 0;
}