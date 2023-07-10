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
    int minDepth(TreeNode* root) {
        if(root==NULL)return 0;
        if(!(root->left) && !(root->right))return 1;
        queue<TreeNode *> q;
        q.push(root);
        int cnt=1;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                auto temp=q.front();
                q.pop();
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
                if(temp->left==NULL && temp->right==NULL)return cnt;
            } cnt++;

        }return 0;
    }
};