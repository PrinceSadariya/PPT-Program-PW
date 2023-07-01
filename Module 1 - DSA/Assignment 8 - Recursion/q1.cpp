// <aside>
// 💡 **Question 1**

// Given two strings s1 and s2, return *the lowest **ASCII** sum of deleted characters to make two strings equal*.

// **Example 1:**

// **Input:** s1 = "sea", s2 = "eat"

// **Output:** 231

// **Explanation:** Deleting "s" from "sea" adds the ASCII value of "s" (115) to the sum.

// Deleting "t" from "eat" adds 116 to the sum.

// At the end, both strings are equal, and 115 + 116 = 231 is the minimum sum possible to achieve this.

// </aside>

#include <bits/stdc++.h>
using namespace std;

int minimumDeleteSum(string s1, string s2)
{
    // Create a 2D vector to store the minimum delete costs
    vector<vector<int>> dp(s1.length() + 1, vector<int>(s2.length() + 1, 0));

    // Fill the first row and column with delete costs
    for (int i = 1; i <= s1.length(); ++i)
    {
        dp[i][0] = dp[i - 1][0] + s1[i - 1];
    }

    for (int j = 1; j <= s2.length(); ++j)
    {
        dp[0][j] = dp[0][j - 1] + s2[j - 1];
    }

    // Compute the minimum delete costs
    for (int i = 1; i <= s1.length(); ++i)
    {
        for (int j = 1; j <= s2.length(); ++j)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = min(
                    s1[i - 1] + dp[i - 1][j],
                    min(
                        s2[j - 1] + dp[i][j - 1],
                        s1[i - 1] + s2[j - 1] + dp[i - 1][j - 1]));
            }
        }
    }

    return dp[s1.length()][s2.length()];
}

int main()
{
    string s1 = "sea";
    string s2 = "eat";
    int minimumDeleteCost = minimumDeleteSum(s1, s2);
    cout << minimumDeleteCost << "\n";

    return 0;
}