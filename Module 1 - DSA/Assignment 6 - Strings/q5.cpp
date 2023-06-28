// <aside>
// 💡 **Question 5**

// The **product sum** of two equal-length arrays a and b is equal to the sum of a[i] * b[i] for all 0 <= i < a.length (**0-indexed**).

// - For example, if a = [1,2,3,4] and b = [5,2,3,1], the **product sum** would be 1*5 + 2*2 + 3*3 + 4*1 = 22.

// Given two arrays nums1 and nums2 of length n, return *the **minimum product sum** if you are allowed to **rearrange** the **order** of the elements in* nums1.

// **Example 1:**

// **Input:** nums1 = [5,3,4,2], nums2 = [4,2,2,5]

// **Output:** 40

// **Explanation:**

// We can rearrange nums1 to become [3,5,4,2]. The product sum of [3,5,4,2] and [4,2,2,5] is 3*4 + 5*2 + 4*2 + 2*5 = 40.

// </aside>

#include <bits/stdc++.h>
using namespace std;

int minProductSum(vector<int> &A, vector<int> &B)
{
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<>());
    int ans = 0;
    for (int i = 0; i < A.size(); ++i)
        ans += A[i] * B[i];
    return ans;
}

int main()
{

    vector<int> n1 = {2, 1, 4, 5, 7};
    vector<int> n2 = {3, 2, 4, 8, 6};

    int ans = minProductSum(n1, n2);
    cout << ans;

    return 0;
}