class Solution {
public:
    int mctFromLeafValues(vector<int>& arr) {
        int n = arr.size();
        vector<vector<int>> maxi(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            maxi[i][i] = arr[i];
            for (int j = i + 1; j < n; j++) {
                maxi[i][j] = max(arr[j], maxi[i][j - 1]);
            }
        }

        vector<vector<int>>dp (n,vector<int>(n,0));
        for(int left = n-1; left>=0; left--){
            for(int right = left+1; right<n; right++){
                int ans = INT_MAX;

                for(int i = left; i<right; i++){
                    ans= min(ans,maxi[left][i]*maxi[i+1][right]+dp[left][i]+dp[i+1][right]);
                }
                dp[left][right]=ans;
            }
        }
        return dp[0][n-1];
    }
};