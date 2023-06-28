// <aside>
// 💡 **Question 1**

// Given two strings s and t, *determine if they are isomorphic*.

// Two strings s and t are isomorphic if the characters in s can be replaced to get t.

// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

// **Example 1:**

// **Input:** s = "egg", t = "add"

// **Output:** true

// </aside>

#include <bits/stdc++.h>
using namespace std;

bool check(string s, string t)
{
    map<char, char> mp;

    for (int i = 0; i < s.size(); i++)
    {
        if (mp.find(s[i]) != mp.end())
        {
            if (mp[s[i]] != t[i])
                return false;
        }
        else
        {
            mp[s[i]] = t[i];
        }
    }

    return true;
}
bool isIsomorphic(string s, string t)
{
    return (check(s, t) && check(t, s));
}

int main()
{
    string s = "abbcc";
    string t = "cddqq";

    bool ans = isIsomorphic(s, t);
    cout << ans;
    return 0;
}