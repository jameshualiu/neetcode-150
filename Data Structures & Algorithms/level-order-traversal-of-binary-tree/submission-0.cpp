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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        queue<TreeNode*> q;
        if(root != nullptr) q.push(root);

        while(!q.empty()) {
            //process lvl
            vector<int> lvl;
            int lvl_size = q.size();
            for(int i = 0; i < lvl_size; ++i) {
                TreeNode* t = q.front();
                lvl.push_back(t->val);

                //add next lvl nodes
                if(t->left != nullptr) q.push(t->left); 
                if(t->right != nullptr) q.push(t->right);
                q.pop();
            }
            ans.push_back(lvl);
        }
        return ans;
    }
};