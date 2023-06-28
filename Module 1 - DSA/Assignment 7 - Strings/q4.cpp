// <aside>
// 💡 **Question 4**

// Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

// **Example 1:**

// **Input:** s = "Let's take LeetCode contest"

// **Output:** "s'teL ekat edoCteeL tsetnoc"

// </aside>

#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
    string temp = "";
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            reverse(temp.begin(), temp.end());
            ans += temp;
            ans += ' ';
            temp = "";
        }
        else
        {
            temp += s[i];
        }
    }
    reverse(temp.begin(), temp.end());
    ans += temp;

    return ans;
}

int main()
{
    string s = "Hello I am Prince Sadariya";

    string ans = reverseWords(s);

    cout << ans;
    return 0;
}