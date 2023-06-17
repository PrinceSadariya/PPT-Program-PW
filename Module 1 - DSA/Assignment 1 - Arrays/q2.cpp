// 💡 **Q2.** Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

// Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

// - Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
// - Return k.

// **Example :**
// Input: nums = [3,2,2,3], val = 3
// Output: 2, nums = [2,2,_*,_*]

// **Explanation:** Your function should return k = 2, with the first two elements of nums being 2. It does not matter what you leave beyond the returned k (hence they are underscores)[

#include <bits/stdc++.h>
using namespace std;

pair<int, vector<int>> rmvOccr(int arr[], int val, int size)
{

    vector<int> temp;
    int k = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != val)
        {
            temp.push_back(arr[i]);
            k++;
        }
    }

    return make_pair(k, temp);
}

int main()
{
    int n = 6;
    int nums[n] = {3, 2, 2, 3, 2, 7};
    int val = 3;

    pair<int, vector<int>> result = rmvOccr(nums, val, n);

    cout << result.first << "\n";

    for (int i = 0; i < result.second.size(); i++)
    {
        cout << result.second[i] << " ";
    }

    return 0;
}