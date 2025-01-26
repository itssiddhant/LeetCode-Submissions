class Solution {
public:
    int solve(vector<int>& cuts, int start, int end,unordered_map<int, unordered_map<int,int>> &dp) {
        if (start>= end)
            return 0;
        if(dp[start][end]) return dp[start][end];
        bool flag = false;
        int ans=INT_MAX;

        for (auto k : cuts) {
            if(k>start && k<end){
                flag =true;  
                ans = min(ans, (end - start + solve(cuts, start, k,dp) +
                            solve(cuts, k, end,dp))); 
            }
        }
        if(flag == false) return 0;
        
        dp[start][end]=ans;
        return ans ;
    }
    int minCost(int n, vector<int>& cuts) { 
        unordered_map<int, unordered_map<int,int>> dp;
        return solve(cuts, 0, n,dp); 
    }
};