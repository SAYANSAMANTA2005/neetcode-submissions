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
    int res = -1e9;
    int subTreemaxPathSum(TreeNode* root) {
        // taking the current node is mandetory
        if (!root) return 0;
        int ans = root->val;
        int lcal = subTreemaxPathSum(root->left),
            rcal = subTreemaxPathSum(root->right);

                ans = ans + max({0, subTreemaxPathSum(root->left), subTreemaxPathSum(root->right)});
        res = max({res, ans, root->val + lcal + rcal});
        return ans;
    }
    int maxPathSum(TreeNode* root) {
        subTreemaxPathSum(root);
        return res;
    }
};
