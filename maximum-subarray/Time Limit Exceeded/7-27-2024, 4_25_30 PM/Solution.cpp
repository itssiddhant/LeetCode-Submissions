// https://leetcode.com/problems/maximum-subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            int sum = 0;

            for (int j = i; j < n; j++) {
                sum += nums[j];
                ans.push_back(sum);
            }
        }
        sort(ans.begin(),ans.end());
        return ans[ans.size()-1];
    }
};