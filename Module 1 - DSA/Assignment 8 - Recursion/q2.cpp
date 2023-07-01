// <aside>
// 💡 **Question 2**

// Given a string s containing only three types of characters: '(', ')' and '*', return true *if* s *is **valid***.

// The following rules define a **valid** string:

// - Any left parenthesis '(' must have a corresponding right parenthesis ')'.
// - Any right parenthesis ')' must have a corresponding left parenthesis '('.
// - Left parenthesis '(' must go before the corresponding right parenthesis ')'.
// - '*' could be treated as a single right parenthesis ')' or a single left parenthesis '(' or an empty string "".

// **Example 1:**

// **Input:** s = "()"

// **Output:**

// true

// </aside>

#include <bits/stdc++.h>
using namespace std;

bool checkValidString(string s)
{

    int leftmin = 0;
    int leftmax = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            leftmin++;
            leftmax++;
        }

        else if (s[i] == ')')
        {
            leftmin--;
            leftmax--;
        }
        else
        {
            leftmin--;
            leftmax++;
        }

        if (leftmax < 0)
            return false;
        if (leftmin < 0)
            leftmin = 0;
    }

    return leftmin == 0;
}

int main()
{

    string s = "()**(*)*)";

    bool ans = checkValidString(s);

    cout << ans;

    return 0;
}