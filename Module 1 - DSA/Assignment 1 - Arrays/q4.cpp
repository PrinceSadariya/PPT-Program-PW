// **Q4.** You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

// Increment the large integer by one and return the resulting array of digits.

// **Example 1:**
// Input: digits = [1,2,3]
// Output: [1,2,4]

// **Explanation:** The array represents the integer 123.

// Incrementing by one gives 123 + 1 = 124.
// Thus, the result should be [1,2,4].

#include <bits/stdc++.h>
using namespace std;

void increaseByOne(int arr[], int size)
{
    if (arr[size - 1] != 9)
    {
        arr[size - 1] += 1;
        return;
    }
    else
    {
        // If we are at 0th index of array, then we have to add one new element in the array,here we ignored it
        arr[size - 1] = 0;
        increaseByOne(arr, size - 1);
    }
}

int main()
{

    int n = 3;
    int num[n] = {1, 0, 9};

    increaseByOne(num, n);

    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }

    return 0;
}