// <aside>
// 💡 **Question 3**

// Given an array of integers arr, return *true if and only if it is a valid mountain array*.

// Recall that arr is a mountain array if and only if:

// - arr.length >= 3
// - There exists some i with 0 < i < arr.length - 1 such that:
//     - arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
//     - arr[i] > arr[i + 1] > ... > arr[arr.length - 1]

// ![Screenshot 2023-05-29 005352.png](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/5565e778-ac57-4ced-85a2-ccb13268bdf6/Screenshot_2023-05-29_005352.png)

// **Example 1:**

// **Input:** arr = [2,1]

// **Output:**

// false

// </aside>

#include <bits/stdc++.h>
using namespace std;

bool validMountainArray(vector<int> &arr)
{
    int n = arr.size();

    int i = 0;

    while (i < n - 1 && arr[i] < arr[i + 1])
    {
        i++;
    }

    if (i == 0 || i == n - 1)
        return false;

    while (i < n - 1 && arr[i] > arr[i + 1])
    {
        i++;
    }

    if (i == n - 1)
        return true;
    return false;
}

int main()
{

    vector<int> nums = {1, 2, 3, 4, 5, 6, 5, 4, 5, 2};

    bool ans = validMountainArray(nums);

    cout << ans;

    return 0;
}