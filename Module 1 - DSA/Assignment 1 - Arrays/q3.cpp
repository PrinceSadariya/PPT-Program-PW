// **Q3.** Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.

// **Example 1:**
// Input: nums = [1,3,5,6], target = 5

// Output: 2

#include <bits/stdc++.h>
using namespace std;

int findIndex(int arr[], int target, int size)
{
    int res = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
        else
        {
            if (arr[i] < target)
            {
                res = i;
            }
            else
            {
                return res + 1;
            }
        }
    }
}

int main()
{

    int n = 10;
    int nums[n] = {1, 2, 4, 5, 6, 7, 8, 9, 10, 12};
    int target = 11;

    int index = findIndex(nums, target, n);

    cout << index << "\n";

    return 0;
}