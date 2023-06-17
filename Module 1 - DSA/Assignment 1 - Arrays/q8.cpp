// **Q8.** You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.

// You are given an integer array nums representing the data status of this set after the error.

// Find the number that occurs twice and the number that is missing and return them in the form of an array.

// **Example 1:**
// Input: nums = [1,2,2,4]
// Output: [2,3]

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 4;
    int nums[n] = {1, 2, 2, 4};

    vector<int> res;

    set<int> s;
    int s_size = 0;

    for (int i = 0; i < n; i++)
    {
        s.insert(nums[i]);

        if (s.size() == s_size)
        {
            res.push_back(nums[i]);
            break;
        }
        else
        {
            s_size++;
        }
    }

    vector<int> temp(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        temp[nums[i - 1]] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        if (temp[i] == 0)
        {
            res.push_back(i);
            break;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}