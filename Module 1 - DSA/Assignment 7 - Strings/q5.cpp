// <aside>
// 💡 **Question 5**

// Given a string s and an integer k, reverse the first k characters for every 2k characters counting from the start of the string.

// If there are fewer than k characters left, reverse all of them. If there are less than 2k but greater than or equal to k characters, then reverse the first k characters and leave the other as original.

// **Example 1:**

// **Input:** s = "abcdefg", k = 2

// **Output:**

// "bacdfeg"

// </aside>

#include <bits/stdc++.h>
using namespace std;

string reverseStr(string s, int k)
{
    int n = s.size();
    for (int i = 0; i < n; i += 2 * k)
    {
        if ((n - i) >= 2 * k)
        {
            reverse(s.begin() + i, s.begin() + i + k);
        }
        else if ((n - i) < 2 * k && (n - i) >= k)
        {
            reverse(s.begin() + i, s.begin() + i + k);
        }
        else
        {
            reverse(s.begin() + i, s.end());
        }
    }

    return s;
}

int main()
{
    string s = "asnnfjd";
    int k = 2;

    string ans = reverseStr(s, k);

    cout << ans;

    return 0;
}