// Question 1
// Given an integer array nums of length n and an integer target, find three integers
// in nums such that the sum is closest to the target.
// Return the sum of the three integers.

// You may assume that each input would have exactly one solution.

// Example 1:
// Input: nums = [-1,2,1,-4], target = 1
// Output: 2

// Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).

#include <bits/stdc++.h>
using namespace std;

int findClosetSum(vector<int> nums, int target)
{
    sort(nums.begin(), nums.end());

    int ans = nums[0] + nums[1] + nums[2];

    for (int i = 0; i < nums.size() - 2; i++)
    {

        int p = i + 1, q = nums.size() - 1;

        while (p < q)
        {
            int temp = nums[i] + nums[p] + nums[q];

            if (abs(ans - target) > abs(target - temp))
                ans = temp;

            if (temp > target)
            {
                q--;
            }
            else if (temp < target)
            {
                p++;
            }
            else
            {
                return temp;
            }
        }
    }

    return ans;
}

int main()
{
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;

    int ans = findClosetSum(nums, target);

    cout << ans << "\n";
    return 0;
}