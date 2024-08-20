class Solution {
public:
    int solve(vector<int>& cuts, int start, int end) {
        if (start>= end)
            return 0;
        bool flag = false;
        int ans=INT_MAX;
        for (auto k : cuts) {
            if(k>start && k<end){
                flag =true;
                ans = min(ans, (end - start + solve(cuts, start, k) +
                            solve(cuts, k, end)));
            }
        }
        if(flag == false) return 0;
        return ans ;
    }
    int minCost(int n, vector<int>& cuts) { 
        return solve(cuts, 0, n); 
    }
};