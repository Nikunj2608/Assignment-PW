#include <iostream>
#include <vector>

int countOnes(const std::vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;

    // Binary search to find the first occurrence of 1
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == 0) {
            left = mid + 1;
        } else {
            if (mid == 0 || arr[mid - 1] == 0) {
                return arr.size() - mid;
            } else {
                right = mid - 1;
            }
        }
    }

    return 0; // No 1's found
}

int main() {
    std::vector<int> arr = {0, 0, 0, 0, 1, 1};
    int count = countOnes(arr);
    std::cout << "Total number of 1's: " << count << std::endl;

    return 0;
}