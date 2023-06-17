// 💡 **Q1.** Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

// **Example:**
// Input: nums = [2,7,11,15], target = 9
// Output0 [0,1]

// **Explanation:** Because nums[0] + nums[1] == 9, we return [0, 1][

#include <bits/stdc++.h>
using namespace std;

vector<int> findIndex(int nums[], int target, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                vector<int> temp = {i, j};
                return temp;
            }
        }
    }
}

int main()
{
    int n = 4;
    int nums[4] = {2, 7, 11, 15};
    int target = 18;

    vector<int> result = findIndex(nums, target, n);

    for (int i = 0; i < 2; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}
