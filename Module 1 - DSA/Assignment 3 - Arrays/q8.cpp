// Question 8
// Given an array of meeting time intervals where intervals[i] = [starti, endi],
// determine if a person could attend all meetings.

// Example 1:
// Input: intervals = [[0,30],[5,10],[15,20]]
// Output: false

#include <bits/stdc++.h>
using namespace std;

bool checkInterval(vector<vector<int>> intr)
{
    // We are assuming here that, intervals are in sorted order

    for (int i = 1; i < intr.size(); i++)
    {
        if (intr[i][0] < intr[i - 1][1])
            return false;
    }

    return true;
}

int main()
{

    vector<vector<int>> intr = {{0, 5}, {5, 10}, {15, 20}};

    bool ans = checkInterval(intr);

    cout << ans << "\n";

    return 0;
}