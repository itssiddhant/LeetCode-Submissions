#include <queue>
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        int i,n;
        queue<TreeNode*> q;   //queue initialize
        if (root == NULL) //base case
            return ans;
        q.push(root); //pushing root into queue
        while (!q.empty()) {
            vector<int> curr;
            n = q.size();
            for (i = 0; i < n; i++) {
                curr.push_back(q.front()->val);
                if (q.front()->left) {
                    q.push(q.front()->left);
                }
                if (q.front()->right) {
                    q.push(q.front()->right);
                }
                q.pop();
            }
            ans.push_back(curr);
        }
    return ans;
    }
};