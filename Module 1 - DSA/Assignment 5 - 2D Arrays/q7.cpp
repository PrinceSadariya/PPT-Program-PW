// Question 7**

// Suppose an array of length n sorted in ascending order is **rotated** between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:

// - [4,5,6,7,0,1,2] if it was rotated 4 times.
// - [0,1,2,4,5,6,7] if it was rotated 7 times.

// Notice that **rotating** an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

// Given the sorted rotated array nums of **unique** elements, return *the minimum element of this array*.

// You must write an algorithm that runs in O(log n) time.

// **Example 1:**

// **Input:** nums = [3,4,5,1,2]

// **Output:** 1

// **Explanation:**

// The original array was [1,2,3,4,5] rotated 3 times.

#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> &nums)
{
    int n = nums.size();
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        if (nums[s] <= nums[e])
            return nums[s];

        int m = s + (e - s) / 2;

        if (nums[s] > nums[m])
            e = m;
        else if (nums[m] > nums[e])
            s = m + 1;
    }

    if (nums[s] <= nums[e])
        return nums[s];
    return -1;
}

int main()
{
    vector<int> nums = {3, 4, 5, 1, 2};
    int ans = findMin(nums);
    cout << ans;
    return 0;
}