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
        void dfs(TreeNode* node, int depth, vector<int>& ans){
            if (!node) {
                return;
            }
            dfs(node->left, depth + 1, ans);
            dfs(node->right, depth + 1, ans);
            if (depth > ans.size()) {
                ans.resize(depth, INT_MIN);
            }
            ans[depth - 1] = max(ans[depth - 1], node->val);
        }
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        dfs(root, 1, ans);
        return ans;
    }
};