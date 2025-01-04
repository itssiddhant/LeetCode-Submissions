class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<int> minExist(26, INT_MAX);
        vector<int> maxExist(26, INT_MIN);
        for(int i = 0; i < s.size(); i++) {
            int z = s[i] - 'a';
            minExist[z] = min(minExist[z], i);
            maxExist[z] = max(maxExist[z], i);
        }
        int uniqueCount = 0;
        for (int z = 0; z < 26; z++) {
            if (minExist[z] == INT_MAX || maxExist[z] == INT_MIN) {
                continue;
            }
            unordered_set<char> between;
            for (int j = minExist[z] + 1; j < maxExist[z]; j++) {
                between.insert(s[j]);
            }
            uniqueCount += between.size();
        }
        return uniqueCount;
    }
};