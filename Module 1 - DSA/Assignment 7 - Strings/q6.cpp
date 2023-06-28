// <aside>
// 💡 **Question 6**

// Given two strings s and goal, return true *if and only if* s *can become* goal *after some number of **shifts** on* s.

// A **shift** on s consists of moving the leftmost character of s to the rightmost position.

// - For example, if s = "abcde", then it will be "bcdea" after one shift.

// **Example 1:**

// **Input:** s = "abcde", goal = "cdeab"

// **Output:**

// true

// </aside>

#include <bits/stdc++.h>
using namespace std;

bool rotateString(string s, string goal)
{
    return s.length() == goal.length() && (s + s).find(goal) != std::string::npos;
}

int main()
{

    string s = "abcde";
    string goal = "cdeab";

    bool ans = rotateString(s, goal);

    cout << ans << "\n";

    return 0;
}