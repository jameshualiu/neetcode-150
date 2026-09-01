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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == nullptr) return nullptr;
        if(root->val ==  p->val) return p;
        if(root->val ==  q->val) return q;
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);
        if(left == p && right == q) return root;
        if(left == q && right == p) return root;
        if((left == q && left == p) && (left == p || left == q)) return root;
        if((right == q && right == p) && (right == p || right == q)) return root;
        if(left != nullptr && right == nullptr) return left;
        if(left == nullptr && right != nullptr) return right;
        return nullptr;
    }
};
