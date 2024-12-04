class Solution {
public:
    int jump(vector<int>& nums) {
        int a = 0;
        int res = 0;
        for (int i = 1; i < nums.size(); i++) {
            nums[i] = max(nums[i] + i, nums[i - 1]);
        }
        while (a < nums.size() - 1) {
            res++;
            a = nums[a];
        }
        return res;
    }
};