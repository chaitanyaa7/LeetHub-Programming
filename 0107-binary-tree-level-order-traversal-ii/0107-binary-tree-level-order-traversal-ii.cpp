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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root==NULL)return {};
        queue<TreeNode *> q;
        q.push(root);
        vector<vector<int>> ans;
        while(!q.empty()){
            int size=q.size();
            vector<int> temp;
            for(int i=0;i<size;i++){
                auto it=q.front();
                q.pop();
                temp.push_back(it->val);
                if(it->left)q.push(it->left);
                if(it->right)q.push(it->right);
            }
            ans.push_back(temp);
           
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};