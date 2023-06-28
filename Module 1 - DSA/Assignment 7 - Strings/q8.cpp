// <aside>
// 💡 **Question 8**

// You are given an array coordinates, coordinates[i] = [x, y], where [x, y] represents the coordinate of a point. Check if these points make a straight line in the XY plane.

// **Example 1:**

// ![Screenshot 2023-05-29 010117.png](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/012b0a97-4e4b-49b6-bc95-0531fc712978/Screenshot_2023-05-29_010117.png)

// **Input:** coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]

// **Output:** true

// </aside>

#include <bits/stdc++.h>
using namespace std;

int getYDiff(vector<int> &a, vector<int> &b)
{
    return a[1] - b[1];
}

int getXDiff(vector<int> &a, vector<int> &b)
{
    return a[0] - b[0];
}

bool checkStraightLine(vector<vector<int>> &coordinates)
{
    int deltaY = getYDiff(coordinates[1], coordinates[0]);
    int deltaX = getXDiff(coordinates[1], coordinates[0]);

    for (int i = 2; i < coordinates.size(); i++)
    {
        if (deltaY * getXDiff(coordinates[i], coordinates[0]) != deltaX * getYDiff(coordinates[i], coordinates[0]))
        {
            return false;
        }
    }
    return true;
}

int main()
{

    vector<vector<int>> nums = {{1, 2}, {2, 3}, {3, 4}, {4, 5}, {5, 6}, {6, 7}};

    bool ans = checkStraightLine(nums);

    cout << ans;

    return 0;
}