// https://leetcode.com/problems/invert-binary-tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void invert(struct TreeNode*root){
    if (root == NULL) return;
    else {
        struct TreeNode *temp = root->left;
        root->left = root->right;
        root->right = temp;
        invert(root->left);
        invert(root->right);
    }
            
}

void inordertraversal(struct TreeNode* root){
    if (root==NULL) return;
    else{
        inordertraversal(root->left);
        printf("%d ",root->val);
        inordertraversal(root->right);
    }
}
struct TreeNode* invertTree(struct TreeNode* root) {
    invert(root);
    inordertraversal(root);
    
    return root;
}