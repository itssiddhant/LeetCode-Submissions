class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0,sum=0;
        int r = numbers.size()-1;
        while(l<r){
            sum = numbers[l]+numbers[r];
            if(sum ==target){
                return {l+1,r+1};
            }else if(sum>target) r--;
            else l++;
        }
        return {-1,-1};
    }
};