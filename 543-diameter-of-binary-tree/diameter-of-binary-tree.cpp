/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 #include <algorithm>
using namespace std;

class Solution {
public:

    int height(TreeNode* root) {

        if (root == NULL) {
            return 0;
        }

        int left = height(root->left);
        int right = height(root->right);

        return 1 + max(left, right);
    }

    void solve(TreeNode* root, int& a) {

        if (root == NULL) {
            return;
        }

        int left = height(root->left);
        int right = height(root->right);

        int current = left + right;

        a = max(a, current);

        solve(root->left, a);
        solve(root->right, a);
    }

    int diameterOfBinaryTree(TreeNode* root) {

        int a = 0;

        solve(root, a);

        return a;
    }
};