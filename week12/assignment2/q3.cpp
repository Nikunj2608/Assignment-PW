#include <iostream>
#include <vector>

void sortArray(std::vector<int>& arr) {
    int n = arr.size();
    int first = -1, second = -1;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            if (first == -1) {
                first = i;
            } else {
                second = i + 1;
                break;
            }
        }
    }

    std::swap(arr[first], arr[second]);

    int left = first + 1;
    int right = second - 1;

    while (left < right) {
        std::swap(arr[left], arr[right]);
        left++;
        right--;
    }

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
}

int main() {
    std::vector<int> arr = {3, 8, 6, 7, 5, 9, 10};
    sortArray(arr);
    return 0;
}