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
    vector<vector<int>>ans;
    void dfs(TreeNode* root,int depth){
     if(!root)return;

     dfs(root->left,depth+1);
     ans[depth].push_back(root->val);
     dfs(root->right,depth+1);


    }
    int dfs1(TreeNode* root){
      if(!root)return 0;
      return 1+ max(dfs1(root->left),dfs1(root->right));
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int depth=dfs1(root);

        ans.resize(depth);
        dfs(root,0);
        return ans;
        
    }
};
