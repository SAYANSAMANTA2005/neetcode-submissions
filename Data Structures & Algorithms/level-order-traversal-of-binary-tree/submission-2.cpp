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
     // this version of solution need ans.push_back line before dfs(left),dfs(right)
     /*
     bcz i want that atleast one element of ans[depth-1] is stored before comming to it 

     so ur parent node should store element before comming to child nodes
     */

      if(ans.size()==depth)ans.push_back({});
     ans[depth].push_back(root->val);
     dfs(root->left,depth+1);
    
     
     dfs(root->right,depth+1);


    }
  
    vector<vector<int>> levelOrder(TreeNode* root) {
     
        dfs(root,0);
        return ans;
        
    }
};
