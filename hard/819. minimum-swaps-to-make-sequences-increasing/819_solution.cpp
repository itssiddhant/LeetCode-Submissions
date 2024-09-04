class Solution {
public:
    int solve(vector<int>& nums1, vector<int>& nums2){
        
        int n = nums1.size();
        int swap = 0;
        int noSwap = 0;
        int currSwap=0;
        int currNoSwap=0;

        for(int i = n-1; i>=1; i--){
            for(int j = 1; j>=0; j--){
                int ans = INT_MAX;

                int prev1 = nums1[i-1];
                int prev2 = nums2[i-1];

                if(j){
                    int temp = prev2;
                    prev2 = prev1;
                    prev1 = temp;
                }

                if(nums1[i]>prev1 && nums2[i]>prev2){
                    ans = noSwap;
                }
                if(nums1[i]>prev2 && nums2[i]>prev1 ){
                    ans = min(ans,1+swap);
                }
                if(j) currSwap = ans;
                else currNoSwap = ans;
            }
            swap = currSwap;
            noSwap = currNoSwap;
        }
        return min(swap,noSwap);

    }
    int minSwap(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.begin(),-1);
        nums2.insert(nums2.begin(),-1);
        return solve(nums1,nums2);
    }
};