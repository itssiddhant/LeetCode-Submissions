class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> curr(2, vector<int>(3,0));
        vector<vector<int>> next(2, vector<int>(3,0));
        for (int i = n - 1; i >= 0; i--) {
            for (int buy = 0; buy <= 1; buy++) {
                for (int limit = 1; limit < 3; limit++) {
                    int profit = 0;
                    if (buy) {
                        profit = max((-prices[i]) + next[0][limit], 0 + next[1][limit]);
                    } else {
                        profit = max((prices[i] + next[1][limit-1]), 0 + next[0][limit]);
                    }
                    curr[buy][limit] = profit;
                }
            }
            next = curr;
        }
        return next[1][2];
    }
};