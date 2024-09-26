class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double res = INT_MIN;
        double sum =0;
        for(int i = 0;i<nums.size();i++){
            if(i<k)sum+=nums[i];
            else{
                res = max(sum,res);
                sum+=nums[i]-nums[i-k];
            }
        }
        res = max(sum,res);
        return res/k;
    }
};