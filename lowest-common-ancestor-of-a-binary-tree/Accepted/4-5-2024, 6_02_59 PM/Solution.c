// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p,
                                      struct TreeNode* q) {
    struct TreeNode* lst;
    struct TreeNode* rst;
    if (root == NULL || root == p || root == q) {
        return root;
    }
    lst = lowestCommonAncestor(root->left, p, q);
    rst = lowestCommonAncestor(root->right, p, q);
    if (!lst)
        return rst;
    if (!rst)
        return lst;
    return root;
}