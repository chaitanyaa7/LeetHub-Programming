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
    int maxi=0;
    void f(TreeNode * root, unordered_map<int,int> &mp){
        
        if(root==NULL)return;
        f(root->left,mp);
        mp[root->val]++;
        maxi=max(maxi,mp[root->val]);
        f(root->right,mp);
    }
    vector<int> findMode(TreeNode* root) {
        if(root==NULL)return {};
        if(!root->left && !root->right)return {root->val};
        unordered_map<int,int> mp;
        f(root,mp);
        vector<int>ans;
        for(auto it:mp){
            if(it.second==maxi)ans.push_back(it.first);
        }
        return ans;
    }
};