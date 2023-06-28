// <aside>
// 💡 **Question 8**

// Given two [sparse matrices](https://en.wikipedia.org/wiki/Sparse_matrix) mat1 of size m x k and mat2 of size k x n, return the result of mat1 x mat2. You may assume that multiplication is always possible.

// **Example 1:**

// ![Screenshot 2023-05-29 005557.png](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/df57e793-12bf-4104-a17b-4e6a88dc7955/Screenshot_2023-05-29_005557.png)

// **Input:** mat1 = [[1,0,0],[-1,0,3]], mat2 = [[7,0,0],[0,0,0],[0,0,1]]

// **Output:**

// [[7,0,0],[-7,0,3]]

// </aside>

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> sparseMatrix(vector<vector<int>> m1, vector<vector<int>> m2)
{
    int m = m1.size();
    int k = m1[0].size(); // same as m2.size()
    int n = m2[0].size();

    vector<vector<int>> ans(m, vector<int>(n));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int q = 0; q < k; q++)
            {
                ans[i][j] += m1[i][q] * m2[q][j];
            }
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> m1 = {{1, 0, 0}, {-1, 0, 3}};
    vector<vector<int>> m2 = {{7, 0, 0}, {0, 0, 0}, {0, 0, 1}};

    vector<vector<int>> ans = sparseMatrix(m1, m2);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}