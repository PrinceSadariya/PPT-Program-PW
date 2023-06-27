// Question 5
// You are given a large integer represented as an integer array digits, where each
// digits[i] is the ith digit of the integer. The digits are ordered from most significant
// to least significant in left-to-right order. The large integer does not contain any
// leading 0's.

// Increment the large integer by one and return the resulting array of digits.

// **Example 1:**
// Input: digits = [1,2,3]
// Output: [1,2,4]

// **Explanation:** The array represents the integer 123.
// Incrementing by one gives 123 + 1 = 124.
// Thus, the result should be [1,2,4].

#include <bits/stdc++.h>
using namespace std;

vector<int> plus1(vector<int> &nums, int n)
{
    if (n == 0)
    {
        if (nums[n] == 9)
        {
            nums[n] = 0;
            vector<int> temp = {1};
            for (auto it : nums)
            {
                temp.push_back(it);
            }

            return temp;
        }
        else
        {
            nums[n]++;
            return nums;
        }
    }
    else
    {
        if (nums[n] == 9)
        {
            nums[n] = 0;
            return plus1(nums, n - 1);
        }
        else
        {
            nums[n]++;
            return nums;
        }
    }
}

int main()
{
    vector<int> nums = {9, 9, 9};

    vector<int> ans = plus1(nums, nums.size() - 1);

    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}