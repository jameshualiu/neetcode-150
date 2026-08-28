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
private:
    int ans = 0;
    int calcHeight(TreeNode* root) {
        if(root == nullptr) return 0;
        int leftHeight = calcHeight(root->left);
        int rightHeight = calcHeight(root->right);
        ans = max(ans, leftHeight + rightHeight);
        return max(leftHeight, rightHeight) + 1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        calcHeight(root);
        return ans;
    }
};
