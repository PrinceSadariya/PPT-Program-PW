// First Unique Character in a String

// Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

// Example 1:
// Input: s = "leetcode"
// Output: 0

// Example 2:
// Input: s = "loveleetcode"
// Output: 2

// Example 3:
// Input: s = "aabb"
// Output: -1

// Constraints:
// a. 1 <= s.length <= 10^5
// b. s consists of only lowercase English letters.

#include <bits/stdc++.h>
using namespace std;

int firstUniqChar(string s)
{
    queue<int> q;
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        q.push(i);
        arr[ch - 'a']++;
        while (!q.empty())
        {
            if (arr[s[q.front()] - 'a'] > 1)
                q.pop();
            else
                break;
        }
    }
    if (q.empty())
        return -1;
    return q.front();
}

int main()
{

    string s = "loveleetcode";

    int ans = firstUniqChar(s);

    cout << ans << "\n";

    return 0;
}