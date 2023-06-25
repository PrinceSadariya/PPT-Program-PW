// Move Zeroes
// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

// Example 1:
// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]

// Example 2:
// Input: nums = [0]
// Output: [0]

// Constraints:
// a. 1 <= nums.length <= 10^4
// b. -2^31 <= nums[i] <= 2^31 - 1

#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int s = 0, e = nums.size();

    while (s < e)
    {
        if (nums[s] == 0)
            break;
        s++;
    }

    int j = s + 1;

    while (s < e && j < e)
    {
        if (nums[j] != 0)
        {
            swap(nums[s], nums[j]);
            s++;
        }
        j++;
    }
}

int main()
{

    vector<int> nums = {12, 3, 0, 56, 0, 67, 0};

    moveZeroes(nums);

    for (auto it : nums)
    {
        cout << it << " ";
    }

    return 0;
}