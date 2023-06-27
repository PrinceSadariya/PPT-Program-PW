// Question 6**

// Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears **once** or **twice**, return *an array of all the integers that appears **twice***.

// You must write an algorithm that runs in O(n) time and uses only constant extra space.

// **Example 1:**

// **Input:** nums = [4,3,2,7,8,2,3,1]

// **Output:**

// [2,3]

#include <bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int> &nums)
{
    vector<int> ans;
    for (int n : nums)
    {
        n = abs(n);
        if (nums[n - 1] > 0)
            nums[n - 1] *= -1;
        else
            ans.push_back(n);
    }
    return ans;
}

int main()
{
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};

    vector<int> ans = findDuplicates(nums);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}