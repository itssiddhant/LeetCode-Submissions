// https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal

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
    int findPos(vector<int>& inorder,int start, int end, int element, int n){
        for(int i =start; i<=end;i++){
            if(inorder[i]==element)return i;
        }
        return -1;
    }
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder,int &index, int start, int end, int n){
        if(index>=n|| start>end)return NULL;

        int element = preorder[index++];
        
        TreeNode* root = new TreeNode(element);
        int pos = findPos(inorder,start,end,element,n);
        
        root-> left = solve(preorder,inorder,index,start,pos-1,n);
        root-> right = solve(preorder,inorder,index,pos+1,end,n);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int index=0;
        int n = preorder.size();
        TreeNode* ans = solve(preorder,inorder,index,0,n-1,n);
        return ans;
    }
};