class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();

        if(m==0) return n;
        if(n==0) return m;

        vector<int>curr(n+1,0);
        vector<int>next(n+1,0);

        for (int i = 0; i <= n; i++) {
            next[i] = n - i;
        }

        for (int s1 = m - 1; s1 >= 0; s1--) {
            for (int s2 = n - 1; s2 >= 0; s2--) {
                curr[n]=m-s1;
                int ans = 0;
                if (word1[s1] == word2[s2])
                    ans= next[s2+1];
                else {
                    int ins = 1 + curr[s2+1];
                    int del = 1 + next[s2];
                    int rep = 1 + next[s2+1];
                    ans = min(ins, min(rep, del));
                }
                curr[s2]=ans;
            }
            next = curr;
        }
        return next[0];
    }
};