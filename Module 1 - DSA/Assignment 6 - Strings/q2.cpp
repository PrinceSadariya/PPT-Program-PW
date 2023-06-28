// <aside>
// 💡 **Question 2**

// You are given an m x n integer matrix matrix with the following two properties:

// - Each row is sorted in non-decreasing order.
// - The first integer of each row is greater than the last integer of the previous row.

// Given an integer target, return true *if* target *is in* matrix *or* false *otherwise*.

// You must write a solution in O(log(m * n)) time complexity.

// **Example 1:**

// ![Screenshot 2023-05-29 005303.png](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/e4b0271f-15f0-4744-826b-18500ccfcb75/Screenshot_2023-05-29_005303.png)

// **Input:** matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3

// **Output:** true

// </aside>

#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int n = matrix.size();
    int s = 0;
    int e = n - 1;
    int row = -1;

    while (s <= e)
    {
        int m = s + (e - s) / 2;

        if (target >= matrix[m][0] && target <= matrix[m][matrix[0].size() - 1])
        {
            row = m;
            break;
        }
        else if (target < matrix[m][0])
            e = m - 1;
        else
            s = m + 1;
    }

    if (row == -1)
        return false;

    s = 0;
    e = matrix[0].size() - 1;

    while (s <= e)
    {
        int m = s + (e - s) / 2;
        if (matrix[row][m] == target)
            return true;
        else if (matrix[row][m] > target)
            e = m - 1;
        else
            s = m + 1;
    }

    return false;
}

int main()
{

    vector<vector<int>> nums = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 12;

    bool ans = searchMatrix(nums, target);

    cout << ans << "\n";

    return 0;
}