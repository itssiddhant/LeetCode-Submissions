class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> st(256, -1);
        int len = 0, curr = -1;
        for (int i = 0; i != s.length(); i++) {
            if (st[s[i]] > curr)
                curr = st[s[i]];
            st[s[i]] = i;
            len = max(len, i - curr);
        }
        return len;
    }
};