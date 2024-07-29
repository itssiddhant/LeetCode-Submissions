// https://leetcode.com/problems/three-consecutive-odds

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int threecount=0;
        for(int i =1 ; i<arr.size()-1; i++){
            if(arr[i-1]%2==1 && arr[i]%2==1 &&arr[i+1]%2==1){
                return true;
            }
        }
        return false;
    }
};