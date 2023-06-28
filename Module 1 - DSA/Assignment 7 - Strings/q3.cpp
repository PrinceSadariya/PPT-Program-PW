// <aside>
// 💡 **Question 3**

// Given two non-negative integers, num1 and num2 represented as string, return *the sum of* num1 *and* num2 *as a string*.

// You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.

// **Example 1:**

// **Input:** num1 = "11", num2 = "123"

// **Output:**

// "134"

// </aside>

#include <bits/stdc++.h>
using namespace std;

string addStrings(string num1, string num2)
{

    int cr = 0;
    int i = num1.size() - 1;
    int j = num2.size() - 1;

    string ans = "";

    while (i >= 0 || j >= 0 || cr > 0)
    {
        int digit1 = (i >= 0) ? (num1[i] - '0') : 0;
        int digit2 = (j >= 0) ? (num2[j] - '0') : 0;

        int sum = digit1 + digit2 + cr;
        int ld = sum % 10;
        cr = sum / 10;

        ans.push_back(static_cast<char>(ld + '0'));

        i--;
        j--;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{

    string s = "123";
    string t = "12";

    string ans = addStrings(s, t);

    cout << ans;
    return 0;
}