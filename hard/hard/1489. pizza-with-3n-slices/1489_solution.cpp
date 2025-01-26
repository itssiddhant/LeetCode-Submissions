class Solution {
public:
    int maxSizeSlices(vector<int>& slices) {
        int k = slices.size();

        vector<int> prev(k+2,0);
        vector<int> curr(k+2,0);
        vector<int> next(k+2,0);

        for(int index = k-2; index>=0; index--){
            for(int n =1; n<=k/3 ; n++){
                int take = slices[index] + next[n-1];
                int notTake = curr[n];

                prev[n]= max(take,notTake);
            }
            next = curr;
            curr = prev;
        }
        int case1= curr[k/3];

        vector<int> prev1(k+2,0);
        vector<int> curr1(k+2,0);
        vector<int> next1(k+2,0);
         for(int index = k-1; index>=1; index--){
            for(int n =1; n<=k/3 ; n++){    
                int take = slices[index] + next1[n-1];
                int notTake = curr1[n];

                prev1[n]= max(take,notTake);
            }
            next1 = curr1;
            curr1 = prev1;
        }
        int case2 = curr1[k/3];
        return max(case1,case2);
    }
};