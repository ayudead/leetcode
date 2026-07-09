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
class Solution {
public:
    int maxSum;
    int solve(TreeNode* root){
        if(root == NULL) return 0;
        int ls = solve(root->left);
        int rs = solve(root->right);
        int path = ls+rs+ root->val;
        int single = max(ls,rs) + root->val;
        int nopath = root->val;
        maxSum = max({path, single, nopath , maxSum});
        return max(single,nopath);
    }
    int maxPathSum(TreeNode* root) {
        maxSum = INT_MIN;
        solve(root);
        return maxSum;

    }
};