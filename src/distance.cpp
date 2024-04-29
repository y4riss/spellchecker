#include <bits/stdc++.h>

int minDistance(std::string word1, std::string word2)
{

    int n = word1.size();
    int m = word2.size();
    std::vector<std::vector<int>> dp(n + 1, std::vector<int>(m + 1));

    for (int i = 0; i <= n; i++)
        dp[i][m] = n - i;
    for (int i = 0; i <= m; i++)
        dp[n][i] = m - i;

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 1; j >= 0; j--)

            dp[i][j] = 1 + std::min({dp[i][j + 1], dp[i + 1][j + 1] - (word1[i] == word2[j]), dp[i + 1][j]});
    }
    return dp[0][0];
}