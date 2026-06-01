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
int ans=0;
 void dfs(TreeNode * root,int maxValue){
    /*
    maxValue--> is the maximum value on the path from [root-> current node) 
    */
    if(!root)return;
    if(maxValue<=root->val)ans++;
  maxValue=max(maxValue,root->val);
  dfs(root->left,maxValue);
  dfs(root->right,maxValue);
 }
    int goodNodes(TreeNode* root) {
        dfs(root,-200);
        return ans;
    }
};
/*
    3
   / \
 3
/\
4 2
*/
