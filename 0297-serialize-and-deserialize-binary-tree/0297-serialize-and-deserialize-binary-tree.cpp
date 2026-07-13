/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    void preorder(TreeNode* root, string &ans) {
        if (root == NULL) {
            ans += "N,";
            return;
        }

        ans += to_string(root->val) + ",";
        preorder(root->left, ans);
        preorder(root->right, ans);
    }

    string serialize(TreeNode* root) {
        string ans = "";
        preorder(root, ans);
        return ans;
    }

    TreeNode* build(vector<string> &tokens, int &i) {
        if (tokens[i] == "N") {
            i++;
            return NULL;
        }

        TreeNode* root = new TreeNode(stoi(tokens[i]));
        i++;

        root->left = build(tokens, i);
        root->right = build(tokens, i);

        return root;
    }

    TreeNode* deserialize(string data) {

        vector<string> tokens;
        string temp = "";
        
        for (char c : data) {
            if (c == ',') {
                tokens.push_back(temp);
                temp = "";
            } else {
                temp += c;
            }
        }

        int i = 0;
        return build(tokens, i);
    }
};