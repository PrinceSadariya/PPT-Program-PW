// Question 8**

// An integer array original is transformed into a **doubled** array changed by appending **twice the value** of every element in original, and then randomly **shuffling** the resulting array.

// Given an array changed, return original *if* changed *is a **doubled** array. If* changed *is not a **doubled** array, return an empty array. The elements in* original *may be returned in **any** order*.

// **Example 1:**

// **Input:** changed = [1,3,4,2,6,8]

// **Output:** [1,3,4]

// **Explanation:** One possible original array could be [1,3,4]:

// - Twice the value of 1 is 1 * 2 = 2.
// - Twice the value of 3 is 3 * 2 = 6.
// - Twice the value of 4 is 4 * 2 = 8.

// Other original arrays could be [4,3,1] or [3,1,4].

#include <bits/stdc++.h>
using namespace std;

vector<int> findOriginalArray(vector<int> &changed)
{
    int n = changed.size();
    if (n & 1)
        return {};
    vector<int> ans;
    map<int, int> mp;
    sort(changed.begin(), changed.end(), greater<int>());
    for (int i = 0; i < n; i++)
    {
        if (mp.find(changed[i] * 2) != mp.end())
        {
            if (mp[changed[i] * 2] > 0)
            {
                mp[changed[i] * 2]--;
            }
            ans.push_back(changed[i]);
            if (mp[changed[i] * 2] == 0)
            {
                mp.erase(changed[i] * 2);
            }
        }
        else
        {
            mp[changed[i]]++;
        }
    }
    for (auto val : mp)
    {
        if (val.second != 0)
            return {};
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 3, 4, 2, 6, 8};
    vector<int> ans = findOriginalArray(nums);

    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}