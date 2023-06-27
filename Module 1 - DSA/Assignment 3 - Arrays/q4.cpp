// Question 4
// Given a sorted array of distinct integers and a target value, return the index if the
// target is found. If not, return the index where it would be if it were inserted in
// order.

// You must write an algorithm with O(log n) runtime complexity.

// Example 1:
// Input: nums = [1,3,5,6], target = 5
// Output: 2

#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    int s = 0, e = nums.size() - 1;

    if (target > nums[e])
        return e + 1;

    while (s <= e)
    {
        int m = s + (e - s) / 2;

        if (nums[m] == target)
            return m;
        else if (nums[m] < target)
        {
            s = m + 1;
        }
        else
        { // nums[m] > target
            e = m - 1;
        }
    }

    return s;
}

int main()
{

    vector<int> nums = {1, 3, 5, 7, 8, 10};
    int target = 6;

    int ans = searchInsert(nums, target);

    cout << ans << "\n";

    return 0;
}