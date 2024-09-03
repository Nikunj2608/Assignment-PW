#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> powerSet(vector<int>& nums) {
    vector<vector<int>> result;
    int n = nums.size();
    int subsets = 1 << n;

    for (int i = 0; i < subsets; i++) {
        vector<int> subset;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                subset.push_back(nums[j]);
            }
        }
        result.push_back(subset);
    }

    return result;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> subsets = powerSet(nums);

    for (const auto& subset : subsets) {
        cout << "[";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}