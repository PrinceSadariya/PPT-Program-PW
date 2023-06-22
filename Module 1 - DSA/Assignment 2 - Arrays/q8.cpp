// Question 8
// You are given an integer array nums and an integer k.

// In one operation, you can choose any index i where 0 <= i < nums.length and change nums[i] to nums[i] + x where x is an integer from the range [-k, k]. You can apply this operation at most once for each index i.

// The score of nums is the difference between the maximum and minimum elements in nums.

// Return the minimum score of nums after applying the mentioned operation at most once for each index in it.

// Example 1:
// Input: nums = [1], k = 0
// Output: 0

// Explanation: The score is max(nums) - min(nums) = 1 - 1 = 0.

#include <bits/stdc++.h>
using namespace std;

int smallestRange(int arr[], int n, int k)
{
    int maxx = arr[0], minn = arr[0];

    for (int i = 0; i < n; i++)
    {
        maxx = max(maxx, arr[i]);
        minn = min(minn, arr[i]);
    }

    int diff = maxx - minn;

    if (diff - k <= k)
        return 0;
    return diff - k - k;
}

int main()
{
    int n = 3;
    int arr[n] = {1, 3, 6};
    int k = 3;

    int res = smallestRange(arr, n, k);

    cout << res << "\n";

    return 0;
}