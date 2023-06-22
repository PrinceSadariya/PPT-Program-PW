// Question 5
// Given an integer array nums, find three numbers whose product is maximum and return the maximum product.

// Example 1:
// Input: nums = [1,2,3]
// Output: 6

#include <bits/stdc++.h>
using namespace std;

int findProduct(int arr[], int n)
{
    sort(arr, arr + n);
    return max(arr[n - 1] * arr[n - 2] * arr[n - 3], arr[0] * arr[1] * arr[n - 1]);
}

int main()
{

    int n = 5;
    int arr[n] = {1, 2, 3, 4, -5};

    int res = findProduct(arr, n);

    cout << res << "\n";

    return 0;
}