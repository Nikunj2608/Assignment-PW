#include <iostream>
#include <vector>

bool isAlmostSorted(const std::vector<int>& arr) {
    int n = arr.size();
    
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1] + 1) {
            return false;
        }
    }
    
    return true;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 5, 4, 6};
    
    if (isAlmostSorted(arr)) {
        std::cout << "The array is almost sorted." << std::endl;
    } else {
        std::cout << "The array is not almost sorted." << std::endl;
    }
    
    return 0;
}