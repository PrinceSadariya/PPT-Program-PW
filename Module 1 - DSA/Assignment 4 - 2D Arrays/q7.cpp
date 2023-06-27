// Question 7**
// You are given an m x n matrix M initialized with all 0's and an array of operations ops, where ops[i] = [ai, bi] means M[x][y] should be incremented by one for all 0 <= x < ai and 0 <= y < bi.

// Count and return *the number of maximum integers in the matrix after performing all the operations*

// **Example 1:**

// ![q4.jpg](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/4d0890d0-7bc7-4f59-be8e-352d9f3c1c52/q4.jpg)

// **Input:** m = 3, n = 3, ops = [[2,2],[3,3]]

// **Output:** 4

// **Explanation:** The maximum integer in M is 2, and there are four of it in M. So return 4.

#include <bits/stdc++.h>
using namespace std;

int maxCount(int m, int n, vector<vector<int>> &ops)
{
    int row = m;
    int col = n;
    for (int i = 0; i < ops.size(); i++)
    {
        row = min(row, ops[i][0]);
        col = min(col, ops[i][1]);
    }

    return col * row;
}

int main()
{
    vector<vector<int>> matrix = {{2, 2}};
    int m = 4, n = 4;

    int ans = maxCount(m, n, matrix);

    cout << ans;
    return 0;
}