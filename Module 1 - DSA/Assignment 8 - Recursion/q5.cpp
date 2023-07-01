// <aside>
// 💡 **Question 5**

// Given an array of characters chars, compress it using the following algorithm:

// Begin with an empty string s. For each group of **consecutive repeating characters** in chars:

// - If the group's length is 1, append the character to s.
// - Otherwise, append the character followed by the group's length.

// The compressed string s **should not be returned separately**, but instead, be stored **in the input character array chars**. Note that group lengths that are 10 or longer will be split into multiple characters in chars.

// After you are done **modifying the input array,** return *the new length of the array*.

// You must write an algorithm that uses only constant extra space.

// **Example 1:**

// **Input:** chars = ["a","a","b","b","c","c","c"]

// **Output:** Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]

// **Explanation:**

// The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".

// </aside>

#include <bits/stdc++.h>
using namespace std;

int compress(vector<char> &chars)
{
    string s = "";
    for (auto x : chars)
    {
        s += x;
    }

    if (s.size() == 1)
    {
        return 1;
    }

    int count = 1, ans = 0;
    ;
    char ch;
    vector<char> a;
    int n = s.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            a.push_back(s[i]);
            if (count > 1)
            {
                ans += 2;
                string temp = to_string(count);

                for (int it = 0; it < temp.size(); it++)
                    a.push_back(temp[it]);
            }
            else
                ans += 1;
            count = 1;
        }
        else
        {
            ch = s[i];
            count++;
        }
    }
    a.push_back(s[n - 1]);
    if (s[n - 1] == s[n - 2])
    {

        string temp = to_string(count);
        for (int it = 0; it < temp.size(); it++)
            a.push_back(temp[it]);
    }

    chars = a;

    return a.size();
}

int main()
{

    vector<char> arr = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};

    int ans = compress(arr);

    cout << ans;

    return 0;
}