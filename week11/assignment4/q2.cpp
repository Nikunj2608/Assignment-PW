#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> powerSet(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> subset;
    int n = nums.size();
    sort(nums.begin(), nums.end());

    backtrack(result, subset, nums, 0);

    return result;
}

void backtrack(vector<vector<int>>& result, vector<int>& subset, vector<int>& nums, int start) {
    result.push_back(subset);

    for (int i = start; i < nums.size(); i++) {
        if (i > start && nums[i] == nums[i - 1]) {
            continue;
        }

        subset.push_back(nums[i]);
        backtrack(result, subset, nums, i + 1);
        subset.pop_back();
    }
}

int main() {
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> subsets = powerSet(nums);

    for (const auto& subset : subsets) {
        cout << "[";
        for (int i = 0; i < subset.size(); i++) {
            cout << subset[i];
            if (i < subset.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }

    return 0;
}