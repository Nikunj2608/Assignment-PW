#include <iostream>

int reverse(int num) {
    // Base case: if the number is a single digit, return it
    if (num < 10) {
        return num;
    }
    
    // Recursive case: reverse the number by recursively calling the function
    int lastDigit = num % 10;
    int remainingDigits = num / 10;
    int reversedNum = reverse(remainingDigits);
    
    // Append the last digit to the reversed number
    int powerOf10 = 1;
    while (remainingDigits >= 10) {
        powerOf10 *= 10;
        remainingDigits /= 10;
    }
    
    return (lastDigit * powerOf10) + reversedNum;
}

int main() {
    int num;
    std::cout << "Enter a positive integer: ";
    std::cin >> num;
    
    int reversedNum = reverse(num);
    std::cout << "Reverse of " << num << " is " << reversedNum << std::endl;
    
    return 0;
}