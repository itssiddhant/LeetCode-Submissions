// https://leetcode.com/problems/diameter-of-binary-tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int max(int a,int b) {return (a>b)?a:b;}
int height(struct TreeNode* node){
    if (node==NULL) return 0;
    return 1 +max(height(node->left),height(node->right));
}

int diameterOfBinaryTree(struct TreeNode* root) {
    if(root==NULL) return 0;
    int Lheight= height(root->left); 
    int Rheight= height(root->right); 
    int LDiameter= diameterOfBinaryTree(root->left); 
    int RDiameter= diameterOfBinaryTree(root->right); 
    return max(Lheight+Rheight,max(LDiameter,RDiameter));
}