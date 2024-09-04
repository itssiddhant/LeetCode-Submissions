class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n = satisfaction.size();
        sort(satisfaction.begin(),satisfaction.end());

        vector<int> curr(n+1,0);
        vector<int> next(n+1,0);

        for(int i = n-1; i>=0; i--){
            for(int j = i; j>=0; j--){
                int include = satisfaction[i]*(j+1) + next[j+1];
                int exclude =next[j];

                curr[j]= max(include,exclude);
            }
            next = curr;
        }
        return next[0];
    }
};