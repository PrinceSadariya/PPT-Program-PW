// **Q7.** Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the nonzero elements.

// Note that you must do this in-place without making a copy of the array.

// **Example 1:**
// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]

#include <bits/stdc++.h>
using namespace std;

void rearrangeZeros(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == 0 && arr[j] != 0)
            {
                swap(arr[i], arr[j]);
                break;
            }
        }
    }
}

int main()
{

    int n = 5;
    int nums[n] = {0, 1, 0, 3, 12};

    rearrangeZeros(nums, n);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}