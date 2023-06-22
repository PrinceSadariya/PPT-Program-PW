// Question 3
// We define a harmonious array as an array where the difference between its maximum value
// and its minimum value is exactly 1.

// Given an integer array nums, return the length of its longest harmonious subsequence
// among all its possible subsequences.

// A subsequence of an array is a sequence that can be derived from the array by deleting some or no elements without changing the order of the remaining elements.

// Example 1:
// Input: nums = [1,3,2,2,5,2,3,7]
// Output: 5

// Explanation: The longest harmonious subsequence is [3,2,2,2,3].

#include <bits/stdc++.h>
using namespace std;

int findHarmoniousSequence(int nums[], int n)
{
    sort(nums, nums + n);
    int i = 0;
    int left = 0;
    int right = 0;
    int ans = 0;
    int maxAns = 0;

    while (right < n)
    {
        if (nums[right] - nums[left] == 1)
        {
            ans = right - left + 1;
            maxAns = max(maxAns, ans);
        }
        else if (nums[right] - nums[left] > 1)
        {
            while (nums[right] - nums[left] > 1)
            {
                left++;
            }
        }
        right++;
    }

    return maxAns;
}

int main()
{

    int n = 8;
    int nums[n] = {1, 3, 2, 2, 6, 2, 3, 7};

    int res = findHarmoniousSequence(nums, n);

    cout << res << "\n";

    return 0;
}