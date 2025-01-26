class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<int> next(2 * k + 1, 0);
        vector<int> curr(2 * k + 1, 0);

        for (int i = n - 1; i >= 0; i--) {
            for (int op = 0; op < 2 * k; op++) {
                int profit = 0;
                if (op % 2 == 0) {
                    profit = max((-prices[i]) + next[op + 1], 0 + next[op]);
                } else {
                    profit = max((prices[i]) + next[op + 1], 0 + next[op]);
                }
                curr[op] = profit;
            }
            next = curr;
        }
        return next[0];
    }
};