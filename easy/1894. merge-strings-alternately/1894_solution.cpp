class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans ="";
        int i =0;
        while(i<max(word1.length(),word2.length())){
            if(i<word1.length()){
                ans+=word1[i];
            }
            if(i<word2.length()){
                ans+=word2[i];
            }
            i++;
        }
        return ans;
    }
};