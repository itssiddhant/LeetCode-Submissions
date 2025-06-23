class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>mp(26,0);
        int maxi=0,count=0,size=tasks.size();
        for(char i:tasks){
            mp[i-'A']++;
            if(mp[i-'A']>maxi) maxi =mp[i-'A'];
        }
        for(int i=0; i<26; i++){
            if(mp[i]==maxi)count++;
        }
        int interval=(maxi-1)*(n+1)+count;
        return max(interval,size);
    }
};