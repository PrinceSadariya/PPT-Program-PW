// <aside>
// 💡 **Question 2**

// Given a string num which represents an integer, return true *if* num *is a **strobogrammatic number***.

// A **strobogrammatic number** is a number that looks the same when rotated 180 degrees (looked at upside down).

// **Example 1:**

// **Input:** num = "69"

// **Output:**

// true

// </aside>

#include <bits/stdc++.h>
using namespace std;

bool same(char a, char b)
{
    return a == b && (a == '0' || a == '1' || a == '8');
}
bool match(char a, char b)
{
    if (a > b)
        swap(a, b);
    return same(a, b) || (a == '6' && b == '9');
}
bool isStrobogrammatic(string num)
{
    int i = 0, j = num.size() - 1;
    for (; i <= j; ++i, --j)
    {
        if ((i != j && !match(num[i], num[j])) || (i == j && !same(num[i], num[j])))
            return false;
    }
    return true;
}

int main()
{
    string s = "96";

    bool ans = isStrobogrammatic(s);

    cout << ans;

    return 0;
}