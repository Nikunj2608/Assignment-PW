#include <iostream>
#include <vector>
#include <algorithm>

int findK(std::vector<int>& arr) {
    int n = arr.size();
    int minVal = *std::min_element(arr.begin(), arr.end());
    int maxVal = *std::max_element(arr.begin(), arr.end());
    
    for (int k = minVal; k <= maxVal; k++) {
        std::vector<int> tempArr(arr);
        for (int i = 0; i < n; i++) {
            tempArr[i] = std::abs(arr[i] - k);
        }
        if (std::is_sorted(tempArr.begin(), tempArr.end())) {
            return k;
        }
    }
    
    return -1;
}

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;
    
    std::vector<int> arr(n);
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    
    int k = findK(arr);
    if (k == -1) {
        std::cout << "No such integer exists.\n";
    } else {
        std::cout << "The integer K is: " << k << "\n";
    }
    
    return 0;
}