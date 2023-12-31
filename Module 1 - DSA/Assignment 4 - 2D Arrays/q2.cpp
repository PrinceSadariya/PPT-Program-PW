// Question 2

// Given two **0-indexed** integer arrays nums1 and nums2, return *a list* answer *of size* 2 *where:*

// - answer[0] *is a list of all **distinct** integers in* nums1 *which are **not** present in* nums2*.*
// - answer[1] *is a list of all **distinct** integers in* nums2 *which are **not** present in* nums1.

// **Note** that the integers in the lists may be returned in **any** order.

// **Example 1:**

// **Input:** nums1 = [1,2,3], nums2 = [2,4,6]

// **Output:** [[1,3],[4,6]]

// **Explanation:**

// For nums1, nums1[1] = 2 is present at index 0 of nums2, whereas nums1[0] = 1 and nums1[2] = 3 are not present in nums2. Therefore, answer[0] = [1,3].

// For nums2, nums2[0] = 2 is present at index 1 of nums1, whereas nums2[1] = 4 and nums2[2] = 6 are not present in nums2. Therefore, answer[1] = [4,6].

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
{
    unordered_set<int> s1;
    unordered_set<int> s2;

    for (int i = 0; i < nums1.size(); i++)
    {
        s1.insert(nums1[i]);
    }

    for (int i = 0; i < nums2.size(); i++)
    {
        s2.insert(nums2[i]);
    }

    vector<int> ans1;

    for (auto it : s1)
    {
        if (s2.find(it) == s2.end())
        {
            ans1.push_back(it);
        }
    }

    vector<int> ans2;

    for (auto it : s2)
    {
        if (s1.find(it) == s1.end())
        {
            ans2.push_back(it);
        }
    }

    return {ans1, ans2};
}

int main()
{
    vector<int> nums1 = {1, 2, 3};
    vector<int> nums2 = {2, 4, 6};

    vector<vector<int>> ans = findDifference(nums1, nums2);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}