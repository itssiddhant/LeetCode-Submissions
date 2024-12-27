class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int res = 0, cur = 0;
        for (int value: values) {
            res = max(res, cur + value);
            cur = max(cur, value) - 1;
        }
        return res;
    }
};