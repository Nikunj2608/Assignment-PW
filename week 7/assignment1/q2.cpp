#include <iostream>
#include <string>
using namespace std;

int countConsonants(const string& str) {
    int count = 0;
    string consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";

    for (char c : str) {
        if (consonants.find(c) != string::npos) {
            count++;
        }
    }

    return count;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int consonantCount = countConsonants(input);
    cout << "Number of consonants: " << consonantCount << endl;

    return 0;
}