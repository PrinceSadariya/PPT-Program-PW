// <aside>
// 💡 **Question 7**

// Given two strings s and t, return true *if they are equal when both are typed into empty text editors*. '#' means a backspace character.

// Note that after backspacing an empty text, the text will continue empty.

// **Example 1:**

// **Input:** s = "ab#c", t = "ad#c"

// **Output:** true

// **Explanation:**

// Both s and t become "ac".

// </aside>

#include <bits/stdc++.h>
using namespace std;

string backspaceRemover(string s)
{
    string ans = "";
    int back = 0;

    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '#')
            back++;
        else
        {
            if (back > 0)
            {
                back--;
            }
            else
            {
                ans += s[i];
            }
        }
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

bool backspaceCompare(string s, string t)
{
    string s1 = backspaceRemover(s);
    string s2 = backspaceRemover(t);

    if (s1 == s2)
        return true;
    return false;
}

int main()
{
    string s = "ab#c";
    string t = "ad#c";

    bool ans = backspaceCompare(s, t);

    cout << ans;
    return 0;
}