// Question 2
// Alice has n candies, where the ith candy is of type candyType[i]. Alice noticed that she started to gain weight, so she visited a doctor.

// The doctor advised Alice to only eat n / 2 of the candies she has (n is always even). Alice likes her candies very much, and she wants to eat the maximum number of different types of candies while still following the doctor's advice.

// Given the integer array candyType of length n, return the maximum number of different types of candies she can eat if she only eats n / 2 of them.

// Example 1:
// Input: candyType = [1,1,2,2,3,3]
// Output: 3

// Explanation: Alice can only eat 6 / 2 = 3 candies. Since there are only 3 types, she can eat one of each type.

#include <bits/stdc++.h>
using namespace std;

int canduCount(int candy[], int n)
{
    sort(candy, candy + n);

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            count++;
            continue;
        }
        if (candy[i] != candy[i - 1])
            count++;
    }

    if ((n / 2) < count)
        return n / 2;
    else
        return count;
}

int main()
{

    int n = 6;
    int candy[n] = {1, 1, 2, 2, 4, 5};

    int res = canduCount(candy, n);

    cout << res << "\n";

    return 0;
}