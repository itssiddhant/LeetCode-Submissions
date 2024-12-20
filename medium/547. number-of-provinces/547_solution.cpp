class Solution {
public:
    void dfs(vector<vector<int>>& M, vector<bool>& vis, int i) {
        vis[i] = true;
        for (int j = 0; j < M.size(); j++)
            if (M[i][j] == 1 && !vis[j])
                dfs(M, vis, j);
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size(), ans = 0;
        if (n == 0)
            return 0;

        vector<bool> vis(n, false);

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                ans++;
                dfs(isConnected, vis, i);
            }
        }
        return ans;
    }
};