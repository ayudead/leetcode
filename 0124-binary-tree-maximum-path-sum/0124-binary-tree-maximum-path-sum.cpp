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
        int mil_gaya = ls+rs+root->val;
        int ek_mila = max(ls, rs) + root->val;
        int nhi_mila = root->val;
        
        maxSum = max({maxSum , mil_gaya, ek_mila, nhi_mila});
        return max(ek_mila, nhi_mila);
    }
    int maxPathSum(TreeNode* root) {
       maxSum =INT_MIN;
       solve(root);
       return maxSum;
    }
};