// <aside>
// 💡 **Question 8**

// Given two strings s and goal, return true *if you can swap two letters in* s *so the result is equal to* goal*, otherwise, return* false*.*

// Swapping letters is defined as taking two indices i and j (0-indexed) such that i != j and swapping the characters at s[i] and s[j].

// - For example, swapping at indices 0 and 2 in "abcd" results in "cbad".

// **Example 1:**

// **Input:** s = "ab", goal = "ba"

// **Output:** true

// **Explanation:** You can swap s[0] = 'a' and s[1] = 'b' to get "ba", which is equal to goal.

// </aside>

#include <bits/stdc++.h>
using namespace std;

bool buddyStrings(string s, string goal)
{
    unordered_map<char, int> mp;
    for (int i = 0; i < s.length(); i++)
        mp[s[i]] = i;
    for (int i = 0; i < goal.length(); i++)
    {
        if (mp.find(goal[i]) == mp.end())
            return false;
        if (mp[goal[i]] != i)
        {
            swap(s[i], s[mp[goal[i]]]);
            if (s == goal)
                return true;
            swap(s[i], s[mp[goal[i]]]);
        }
    }
    return false;
}

int main()
{
    string s = "ab";
    string g = "ba";

    bool ans = buddyStrings(s, g);

    cout << ans;
    return 0;
}