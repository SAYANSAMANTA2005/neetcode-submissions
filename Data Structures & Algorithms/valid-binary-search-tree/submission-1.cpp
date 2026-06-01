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
bool ans=true;
    void dfs(TreeNode* root,int upperlimit,int lowerlimit){
        if(!root)return;
        if(!(root->val<upperlimit && root->val>lowerlimit)) ans=false;
       // cout<< root->val<<" "<<upperlimit<<" "<<lowerlimit<<endl;
        dfs(root->left,root->val,lowerlimit);
        dfs(root->right,upperlimit,root->val);
    }
    bool isValidBST(TreeNode* root) {
        dfs(root,1e9,-1e9);
        return ans;
    }
};
