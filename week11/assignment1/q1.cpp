#include <iostream>

void printSequence(int n) {
    if (n <= 0) {
        return;
    }
    
    std::cout << n << " ";
    
    printSequence(n - 1);
    
    std::cout << n << " ";
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    
    printSequence(num);
    
    return 0;
}