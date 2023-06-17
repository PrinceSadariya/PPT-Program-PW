// **Q5.** You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

// Merge nums1 and nums2 into a single array sorted in non-decreasing order.

// The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

// **Example 1:**
// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]

// **Explanation:** The arrays we are merging are [1,2,3] and [2,5,6].
// The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

#include <bits/stdc++.h>
using namespace std;

void mergeSortedArray(int arr1[], int m, int arr2[], int n)
{
    int temp[m];

    for (int i = 0; i < m; i++)
    {
        temp[i] = arr1[i];
    }

    int temp_index = 0;
    int arr2_index = 0;

    for (int i = 0; i < n + m; i++)
    {
        if (temp[temp_index] >= arr2[arr2_index])
        {
            arr1[i] = arr2[arr2_index];
            arr2_index++;
        }
        else
        {
            arr1[i] = temp[temp_index];
            temp_index++;
        }
    }
}

int main()
{
    int num1_l = 10;
    int m = 4;
    int num1[num1_l] = {1, 3, 4, 5, 0, 0, 0, 0, 0, 0};

    int n = 6;
    int num2[n] = {1, 2, 3, 4, 5, 6};

    mergeSortedArray(num1, m, num2, n);

    for (int i = 0; i < num1_l; i++)
    {
        cout << num1[i] << " ";
    }

    return 0;
}