// **Q6.** Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

// **Example 1:**
// Input: nums = [1,2,3,1]

// Output: true

#include <bits/stdc++.h>
using namespace std;

bool checkDuplicate(int arr[], int size)
{
    sort(arr, arr + size);

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            return true;
        }
    }

    return false;
}

int main()
{

    int n = 4;
    int nums[n] = {34, 1, 1, 2};

    bool result = checkDuplicate(nums, n);

    cout << result << "\n";

    return 0;
}