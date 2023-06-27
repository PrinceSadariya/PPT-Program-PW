// Question 7
// You are given an inclusive range [lower, upper] and a sorted unique integer array
// nums, where all elements are within the inclusive range.

// A number x is considered missing if x is in the range [lower, upper] and x is not in
// nums.

// Return the shortest sorted list of ranges that exactly covers all the missing
// numbers. That is, no element of nums is included in any of the ranges, and each
// missing number is covered by one of the ranges.

// Example 1:
// Input: nums = [0,1,3,50,75], lower = 0, upper = 99
// Output: [[2,2],[4,49],[51,74],[76,99]]

// Explanation: The ranges are:
// [2,2]
// [4,49]
// [51,74]
// [76,99]

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> range(vector<int> nums, int lower, int upper)
{
    vector<vector<int>> result;

    int start = lower;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > start)
        {
            result.push_back({start, nums[i] - 1});
        }

        start = nums[i] + 1;
    }

    if (start <= upper)
    {
        result.push_back({start, upper});
    }

    return result;
}

int main()
{

    vector<int> nums = {1, 3, 4, 7, 9, 13};

    int lower = 1;
    int upper = 15;

    vector<vector<int>> ans = range(nums, lower, upper);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i][0] << " " << ans[i][1] << "\n";
    }

    return 0;
}