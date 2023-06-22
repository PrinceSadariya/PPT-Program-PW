// Question 7
// An array is monotonic if it is either monotone increasing or monotone decreasing.

// An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is
// monotone decreasing if for all i <= j, nums[i] >= nums[j].

// Given an integer array nums, return true if the given array is monotonic, or false otherwise.

// Example 1:
// Input: nums = [1,2,2,3]
// Output: true

#include <bits/stdc++.h>
using namespace std;

bool checkMonotonic(int nums[], int n)
{
    bool asc = true;
    bool desc = true;

    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] < nums[i + 1])
            desc = false;
        if (nums[i] > nums[i + 1])
            asc = false;
    }

    if (asc || desc)
        return true;
    return false;
}

int main()
{

    int n = 5;
    int arr[n] = {7, 6, 5, 4, 3};

    bool res = checkMonotonic(arr, n);

    cout << res << "\n";

    return 0;
}