// <aside>
// 💡 **Question 1**

// A permutation perm of n + 1 integers of all the integers in the range [0, n] can be represented as a string s of length n where:

// - s[i] == 'I' if perm[i] < perm[i + 1], and
// - s[i] == 'D' if perm[i] > perm[i + 1].

// Given a string s, reconstruct the permutation perm and return it. If there are multiple valid permutations perm, return **any of them**.

// **Example 1:**

// **Input:** s = "IDID"

// **Output:**

// [0,4,1,3,2]

// </aside>

#include <bits/stdc++.h>
using namespace std;

vector<int> diStringMatch(string s)
{
    int n = s.size();
    int mini = 0;
    int maxi = n;

    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'I')
        {
            ans.push_back(mini++);
        }
        else
        {
            ans.push_back(maxi--);
        }
    }

    ans.push_back(mini);
    return ans;
}

int main()
{

    string s = "IDIDIDIDI";

    vector<int> per = diStringMatch(s);

    for (auto it : per)
    {
        cout << it << " ";
    }

    return 0;
}