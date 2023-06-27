// Question 1
// Given three integer arrays arr1, arr2 and arr3 **sorted** in **strictly increasing** order, return a sorted array of **only** the integers that appeared in **all** three arrays.

// **Example 1:**

// Input: arr1 = [1,2,3,4,5], arr2 = [1,2,5,7,9], arr3 = [1,3,4,5,8]

// Output: [1,5]

// **Explanation:** Only 1 and 5 appeared in the three arrays.

#include <bits/stdc++.h>
using namespace std;

vector<int> intersectionArray(vector<int> v1, vector<int> v2, vector<int> v3)
{
    int j = 0, k = 0, l = 0;

    vector<int> ans;

    while (j < v1.size() && k < v2.size() && l < v3.size())
    {
        if (v1[j] == v2[k] && v2[k] == v3[l])
        {
            ans.push_back(v1[j]);
            j++;
            k++;
            l++;
        }
        else if (v1[j] < v2[k] || v1[j] < v3[l])
        {
            j++;
        }
        else if (v2[k] < v1[j] || v2[k] < v3[l])
        {
            k++;
        }
        else if (v3[l] < v1[j] || v3[l] < v2[k])
        {
            l++;
        }
    }

    return ans;
}

int main()
{

    vector<int> v1 = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    vector<int> v2 = {10, 20, 30, 40, 50};
    vector<int> v3 = {20, 40};

    vector<int> ans = intersectionArray(v1, v2, v3);

    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}