class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int total = 0;
        int n = nums.size();
        for(int i =0; i<n; i++){
            total +=nums[i];
        }
        if(total&1)return false;
        int target = total/2;
        vector<int>curr(target+1,0);
        vector<int>next(target+1,0);
        curr[0]=1;
        next[0]=1;

        for(int i = n-1; i>=0; i--){
            for(int j = 0; j<=target; j++){
                bool include = 0;
                if(j-nums[i]>=0)
                    include = next[j-nums[i]];
                bool exclude = next[j];
                curr[j]= include ||exclude;
            }
            next = curr;
        }
        return next[target];
    }
};