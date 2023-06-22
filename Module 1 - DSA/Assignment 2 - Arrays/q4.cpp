// Question 4
// You have a long flowerbed in which some of the plots are planted, and some are not.
// However, flowers cannot be planted in adjacent plots.
// Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule and false otherwise.

// Example 1:
// Input: flowerbed = [1,0,0,0,1], n = 1
// Output: true

#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> flowerbed, int n)
{
    int count = 0;
    for (int i = 0; i < flowerbed.size(); i++)
    {
        if (flowerbed[i] == 0)
        {
            bool emptyLeftPlot = (i == 0) || (flowerbed[i - 1] == 0);
            bool emptyRightPlot = (i == flowerbed.size() - 1) || (flowerbed[i + 1] == 0);

            if (emptyLeftPlot && emptyRightPlot)
            {
                flowerbed[i] = 1;
                count++;
                if (count >= n)
                {
                    return true;
                }
            }
        }
    }
    return count >= n;
}

int main()
{
    vector<int> arr = {1, 0, 0, 0, 1, 0, 0};
    bool res = check(arr, 2);

    cout << res;

    return 0;
}