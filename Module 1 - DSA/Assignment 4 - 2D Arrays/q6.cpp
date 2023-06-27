// Question 6
// Given an integer array nums sorted in **non-decreasing** order, return *an array of **the squares of each number** sorted in non-decreasing order*.

// **Example 1:**

// Input: nums = [-4,-1,0,3,10]

// Output: [0,1,9,16,100]

// **Explanation:** After squaring, the array becomes [16,1,0,9,100].
// After sorting, it becomes [0,1,9,16,100]

#include <bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int> &nums)
{
    // finding first positive number
    int i = 0;
    for (i = 0; i < nums.size(); i++)
    {
        if (nums[i] >= 0)
            break;
    }

    int j = i - 1;
    int k = i;

    vector<int> ans;

    while (j >= 0 && k < nums.size())
    {
        if (-nums[j] >= nums[k])
        {
            ans.push_back(nums[k] * nums[k]);
            k++;
        }
        else
        { //-nums[j] < nums[k]
            ans.push_back(nums[j] * nums[j]);
            j--;
        }
    }

    // for remainig elements
    while (j >= 0)
    {
        ans.push_back(nums[j] * nums[j]);
        j--;
    }
    while (k < nums.size())
    {
        ans.push_back(nums[k] * nums[k]);
        k++;
    }

    return ans;
}

int main()
{

    vector<int> nums = {-10, -5, 0, 2, 9};

    vector<int> ans = sortedSquares(nums);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}