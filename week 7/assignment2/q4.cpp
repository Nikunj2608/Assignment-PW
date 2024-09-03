#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>

bool areAnagrams(const std::vector<std::string>& strings) {
    std::unordered_map<std::string, int> frequencyMap;

    for (const std::string& str : strings) {
        std::string sortedStr = str;
        std::sort(sortedStr.begin(), sortedStr.end());
        frequencyMap[sortedStr]++;
    }

    for (const auto& pair : frequencyMap) {
        if (pair.second > 1) {
            return true;
        }
    }

    return false;
}

int main() {
    std::vector<std::string> strings = {"listen", "silent", "hello", "world"};

    if (areAnagrams(strings)) {
        std::cout << "The array contains anagrams." << std::endl;
    } else {
        std::cout << "The array does not contain anagrams." << std::endl;
    }

    return 0;
}