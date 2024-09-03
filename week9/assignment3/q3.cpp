#include <iostream>
#include <algorithm>
using namespace std;

int kthSmallest(int arr[], int n, int k) {
    sort(arr, arr + n);
    return arr[k - 1];
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int kthSmallestElement = kthSmallest(arr, n, k);
    cout << "The " << k << "th smallest element is: " << kthSmallestElement << endl;
    return 0;
}