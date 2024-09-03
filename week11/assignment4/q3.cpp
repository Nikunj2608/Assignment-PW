#include <iostream>
#include <vector>

int longestCommonSubstring(const std::string& str1, const std::string& str2) {
    int m = str1.length();
    int n = str2.length();

    std::vector<std::vector<int>> dp(m + 1, std::vector<int>(n + 1, 0));
    int maxLength = 0;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (str1[i - 1] == str2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                maxLength = std::max(maxLength, dp[i][j]);
            }
        }
    }

    return maxLength;
}

int main() {
    std::string str1 = "abcdef";
    std::string str2 = "defghij";

    int length = longestCommonSubstring(str1, str2);
    std::cout << "Length of the longest common substring: " << length << std::endl;

    return 0;
}