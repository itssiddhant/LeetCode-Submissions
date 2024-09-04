class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        int n = envelopes.size();
        if (n == 0)
            return 0;
        sort(envelopes.begin(), envelopes.end(),
             [](vector<int>& a, vector<int>& b) {
                 return a[0] == b[0] ? a[1] > b[1] : a[0] < b[0];
             });

        vector<int> sortedWidths(n);
        for (int i = 0; i < n; ++i) {
            sortedWidths[i] = envelopes[i][1];
        }
        vector<int> ans;
        ans.push_back(sortedWidths[0]);

        for (int i = 1; i < n; ++i) {
            if (sortedWidths[i] > ans.back()) {
                ans.push_back(sortedWidths[i]);
            } else {
                int index =
                    lower_bound(ans.begin(), ans.end(), sortedWidths[i]) -
                    ans.begin();
                ans[index] = sortedWidths[i];
            }
        }
        return ans.size();
    }
};