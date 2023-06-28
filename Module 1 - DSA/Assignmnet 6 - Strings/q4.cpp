// <aside>
// 💡 **Question 4**

// Given a binary array nums, return *the maximum length of a contiguous subarray with an equal number of* 0 *and* 1.

// **Example 1:**

// **Input:** nums = [0,1]

// **Output:** 2

// **Explanation:**

// [0, 1] is the longest contiguous subarray with an equal number of 0 and 1.

// </aside>

#include <bits/stdc++.h>
using namespace std;

int findMaxLength(vector<int> &nums)
{
    vector<int> arr(2 * nums.size() + 1, -2);

    arr[nums.size()] = -1;

    int maxi = 0, cnt = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        cnt = cnt + (nums[i] == 0 ? -1 : 1);

        if (arr[cnt + nums.size()] >= -1)
            maxi = max(maxi, i - arr[cnt + nums.size()]);
        else
            arr[cnt + nums.size()] = i;
    }

    return maxi;
}

int main()
{
    vector<int> nums = {0, 1, 0};

    int ans = findMaxLength(nums);

    cout << ans;

    return 0;
}