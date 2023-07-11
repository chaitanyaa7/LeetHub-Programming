/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
   void markParents(TreeNode* root, unordered_map<TreeNode*, TreeNode*> &parent, TreeNode* target) {
        queue<TreeNode*> queue;
        queue.push(root);
        while(!queue.empty()) { 
            TreeNode* current = queue.front(); 
            queue.pop();
            if(current->left) {
                parent[current->left] = current;
                queue.push(current->left);
            }
            if(current->right) {
                parent[current->right] = current;
                queue.push(current->right);
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*> parent;
        markParents(root,parent,target);
        queue<TreeNode*> queue;

        unordered_map<TreeNode*,bool> visited;
        visited[target]=true;
        queue.push(target);
        int cnt=0;
        while(!queue.empty()){
            if(cnt++==k)break;
            int size=queue.size();
            for(int i=0; i<size; i++) {
                TreeNode* current = queue.front(); queue.pop();
                if(current->left && !visited[current->left]) {
                    queue.push(current->left);
                    visited[current->left] = true;
                }
                if(current->right && !visited[current->right]) {
                    queue.push(current->right);
                    visited[current->right] = true;
                }
                if(parent[current] && !visited[parent[current]]) {
                    queue.push(parent[current]);
                    visited[parent[current]] = true;
                }
            }
            


        }
        vector<int> ans;
        while(!queue.empty()){
            TreeNode* temp=queue.front();
            queue.pop();
            ans.push_back(temp->val);
        }return ans;
    }
};