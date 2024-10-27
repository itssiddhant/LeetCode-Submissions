class Solution {
public:
    int dfs(vector<vector<int>>& u, vector<bool>& visited, int from) {
        auto change = 0;
        visited[from] = true;
        for (auto to : u[from])
            if (!visited[abs(to)])
                change += dfs(u, visited, abs(to)) + (to > 0);
        return change;
    }
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<int>> u(n);
        vector<bool> ans(n);
        for (auto& c : connections) {
            u[c[0]].push_back(c[1]);
            u[c[1]].push_back(-c[0]);
        }
        return dfs(u,ans, 0);
    }
};