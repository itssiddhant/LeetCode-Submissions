// https://leetcode.com/problems/build-an-array-with-stack-operations

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int targetIndex = 0;
        for (int num=1; num<=n; ++num) {
            if (targetIndex>=target.size()) {
                break;
            }
            ans.push_back("Push");
            if (num==target[targetIndex]) {
                targetIndex++;
            } 
            else{
                ans.push_back("Pop");
            }
        }
        return ans;
    }
};