// Given an array of integers nums which is sorted in ascending order, and an integer target,
// write a function to search target in nums. If target exists, then return its index. Otherwise,
// return -1.

// You must write an algorithm with O(log n) runtime complexity.

// Input: nums = [-1,0,3,5,9,12], target = 9
// Output: 4

// Explanation: 9 exists in nums and its index is 4

#include <bits/stdc++.h>
using namespace std;

int findIndex(int arr[], int n, int target)
{
    int s = 0, e = n - 1;

    while (s <= e)
    {
        int m = s + (e - s) / 2;

        if (target == arr[m])
            return m;
        else if (target > arr[m])
        {
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
    }
    return -1;
}

int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    int target = 1;

    int res = findIndex(arr, n, target);

    cout << res << "\n";

    return 0;
}