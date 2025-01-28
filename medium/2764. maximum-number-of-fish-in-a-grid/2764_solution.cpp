class Solution {
public:
    int dfs(int r, int c, vector<vector<int>>& g) {
        if (min(r, c) < 0 || r == g.size() || c == g[r].size() || g[r][c] == 0)
            return 0;
        return exchange(g[r][c], 0) + dfs(r + 1, c, g) + dfs(r, c + 1, g) +
               dfs(r - 1, c, g) + dfs(r, c - 1, g);
    }
    int findMaxFish(vector<vector<int>>& grid) {
        int res = 0;
        for (int r = 0; r < grid.size(); ++r)
            for (int c = 0; c < grid[r].size(); ++c)
                res = max(res, dfs(r, c, grid));
        return res;
    }
};