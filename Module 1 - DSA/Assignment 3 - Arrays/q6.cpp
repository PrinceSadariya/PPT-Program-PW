// Question 6
// Given a non-empty array of integers nums, every element appears twice except
// for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only
// constant extra space.

// Example 1:
// Input: nums = [2,2,1]
// Output: 1

#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int ans = 0;
    for (auto it : nums)
    {
        ans = ans ^ it;
    }

    return ans;
}

int main()
{
    vector<int> nums = {1, 1, 2, 3, 3};

    int ans = singleNumber(nums);

    cout << ans << "\n";

    return 0;
}