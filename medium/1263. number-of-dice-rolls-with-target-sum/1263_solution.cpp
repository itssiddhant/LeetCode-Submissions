class Solution {
public:
    int numRollsToTarget(int n, int k, int target) {
        const int MOD = 1e9+7;
        vector<long long> prev(target+1,0);
        vector<long long> curr(target+1,0);

        prev[0]=1;

        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=target;j++){
                long long ans = 0;
                for(int f = 1; f<=k;f++){
                    if(j-f>=0){
                        ans = (ans + prev[j-f])%MOD;
                    }
                }
                curr[j]= ans;
            }
            prev = curr;
        }
        return prev[target];

    }
};