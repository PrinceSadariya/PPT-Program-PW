// <aside>
// 💡 **Question 7**

// Given an encoded string, return its decoded string.

// The encoding rule is: k[encoded_string], where the encoded_string inside the square brackets is being repeated exactly k times. Note that k is guaranteed to be a positive integer.

// You may assume that the input string is always valid; there are no extra white spaces, square brackets are well-formed, etc. Furthermore, you may assume that the original data does not contain any digits and that digits are only for those repeat numbers, k. For example, there will not be input like 3a or 2[4].

// The test cases are generated so that the length of the output will never exceed 105.

// **Example 1:**

// **Input:** s = "3[a]2[bc]"

// **Output:** "aaabcbc"

// </aside>

#include <bits/stdc++.h>
using namespace std;

string decode(string s)
{
    int count = 0;
    string temp = "", n = "", res = "";
    vector<string> ans;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 48 && s[i] < 58 && count == 0)
        {
            n += s[i];
            if (temp != "")
            {
                ans.push_back("1");
                ans.push_back(temp);
                temp = "";
            }
        }
        else if (s[i] == '[' && count == 0)
            count++;
        else if (s[i] == ']' && count == 1)
        {
            ans.push_back(n);
            ans.push_back(temp);
            n = "";
            temp = "";
            count = 0;
        }
        else if (s[i] == '[')
        {
            count++;
            temp += s[i];
        }
        else if (s[i] == ']')
        {
            count--;
            temp += s[i];
        }
        else
        {
            temp += s[i];
        }
    }

    if (temp != "")
    {
        ans.push_back("1");
        ans.push_back(temp);
    }

    // for(int i=0; i<ans.size(); i++) cout << ans[i] << " ";

    for (int i = 0; i < ans.size(); i += 2)
    {
        int c = stoi(ans[i]);
        string temp = ans[i + 1];
        while (c--)
            res += temp;
    }

    return res;
}

bool check(string s)
{
    for (int i = 0; i < s.length(); i++)
        if (s[i] >= 48 && s[i] < 58)
            return true;
    return false;
}

string decodeString(string s)
{

    while (check(s))
        s = decode(s);

    return s;
}

int main()
{
    string s = "3[a]2[bc]";

    string ans = decode(s);

    cout << ans;

    return 0;
}