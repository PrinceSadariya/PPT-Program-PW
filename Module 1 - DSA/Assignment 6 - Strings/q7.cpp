// <aside>
// 💡 **Question 7**

// Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.

// **Example 1:**

// ![Screenshot 2023-05-29 005522.png](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/00c8517f-7682-4e0b-bdd9-ce0e087f3f94/Screenshot_2023-05-29_005522.png)

// **Input:** n = 3

// **Output:** [[1,2,3],[8,9,4],[7,6,5]]

// </aside>

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generateMatrix(int n)
{
    vector<vector<int>> result(n, vector<int>(n));
    int cnt = 1;
    for (int layer = 0; layer < (n + 1) / 2; layer++)
    {

        for (int ptr = layer; ptr < n - layer; ptr++)
        {
            result[layer][ptr] = cnt++;
        }

        for (int ptr = layer + 1; ptr < n - layer; ptr++)
        {
            result[ptr][n - layer - 1] = cnt++;
        }

        for (int ptr = n - layer - 2; ptr >= layer; ptr--)
        {
            result[n - layer - 1][ptr] = cnt++;
        }

        for (int ptr = n - layer - 2; ptr > layer; ptr--)
        {
            result[ptr][layer] = cnt++;
        }
    }

    return result;
}

int main()
{

    int n = 4;

    vector<vector<int>> matrix = generateMatrix(n);

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}