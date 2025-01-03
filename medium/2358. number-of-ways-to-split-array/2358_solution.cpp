class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        vector<long long> pre(n + 1, 0);
        for (int i = 0; i < n; i++) {
            pre[i + 1] = pre[i] + nums[i];
        }
        int ways = 0;
        for (int i = 1; i < n; i++) {
            if (pre[i] >= pre[n] - pre[i]) {
                ways++;
            }
        }
        return ways;
    }
};