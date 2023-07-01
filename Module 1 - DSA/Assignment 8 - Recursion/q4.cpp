// <aside>
// 💡 **Question 4**

// You need to construct a binary tree from a string consisting of parenthesis and integers.

// The whole input represents a binary tree. It contains an integer followed by zero, one or two pairs of parenthesis. The integer represents the root's value and a pair of parenthesis contains a child binary tree with the same structure.
// You always start to construct the **left** child node of the parent first if it exists.

// ![Screenshot 2023-05-29 010548.png](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/bdbea2d1-34a4-4c4b-a450-ea6db7410c43/Screenshot_2023-05-29_010548.png)

// **Input:** s = "4(2(3)(1))(6(5))"

// **Output:** [4,2,6,3,1,5]

// </aside>

#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode *createNode(int val)
{
    TreeNode *newNode = new TreeNode(val);
    return newNode;
}

TreeNode *constructTree()
{
    int val;
    cout << "Enter root value (-1 for no node): ";
    cin >> val;

    if (val == -1)
    {
        return nullptr;
    }

    TreeNode *root = createNode(val);

    cout << "Enter left child of " << val << ": ";
    root->left = constructTree();

    cout << "Enter right child of " << val << ": ";
    root->right = constructTree();

    return root;
}

// Main function For convert tree into string
string tree2str(TreeNode *node)
{
    string res = "";

    if (node == nullptr)
        return res;

    res += to_string(node->val);

    if (node->left || node->right)
    {
        res += "(";
        res += tree2str(node->left);
        res += ")";
    }

    if (node->right)
    {
        res += "(";
        res += tree2str(node->right);
        res += ")";
    }

    return res;
}

int main()
{
    TreeNode *root = constructTree();

    string result = tree2str(root);

    cout << result << endl;

    return 0;
}