class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        return all_of(nums.begin(), nums.end(), [&, i=-1](int x) mutable{
            return (++i==0)?1:(nums[i-1]^x)&1;
        });
    }
};