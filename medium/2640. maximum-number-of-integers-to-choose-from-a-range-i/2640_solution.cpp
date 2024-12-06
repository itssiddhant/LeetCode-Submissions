class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        long long sum=0,count=0;
        unordered_set<int> bset(banned.begin(),banned.end());
        for(int i=1; i<=n; i++){
            if(bset.find(i)!=bset.end()){
                continue;
            }
            if(sum+i>maxSum){
                break;
            }
            sum+=i;
            count++;
        }
        return count;
    }
};