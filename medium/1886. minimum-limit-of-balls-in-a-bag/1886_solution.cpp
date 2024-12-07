class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int low =1;
        int high = 1e9;
        while(low<high){
            int mid = (low + high)/2,count=0;
            for(int i: nums){
                count+=(i-1)/mid;
            }
            if(count>maxOperations) low = mid+1;
            else high = mid;
        }
        return low;
    }
};