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
    int countt(TreeNode* root){
        if(root==NULL)return 0;
        int ans=1+countt(root->left)+countt(root->right);
        return ans;
    }
    bool f(TreeNode *root,int index,int total){
        if(root==NULL)return true;
        if(index>=total)return false;
        int left=f(root->left,2*index+1,total);
        int right=f(root->right,2*index+2,total);
        return left&&right;
    }
    bool isCompleteTree(TreeNode* root) {
        int total=countt(root);
        return f(root,0,total);
    }
};