// https://leetcode.com/problems/check-completeness-of-a-binary-tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool isCBT(TreeNode* root, int i, int nodeCount) {
        if (root == NULL)
            return true;
        if (i >= nodeCount)
            return false;

        else {
            bool left = isCBT(root->left, 2 * i + 1, nodeCount);
            bool right = isCBT(root->right, 2 * i + 2, nodeCount);
            return left && right;
        }
    }
    int countNodes(TreeNode* root){
        if(root==NULL)return 0;

        int ans = 1 + countNodes(root->left) + countNodes(root->right);
        return ans;
    }
    bool isCompleteTree(TreeNode* root) {
        int index = 0;
        int count = countNodes(root);

        return (isCBT(root, index, count));
    }
};