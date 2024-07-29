// https://leetcode.com/problems/first-unique-character-in-a-string

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> count;
        queue<int> q;
        int ans = -1;

        for (int i = 0; i < s.length(); i++) {
            int ch = s[i];
            count[ch]++;

            q.push(i);

            while (!q.empty() && count[s[q.front()]] > 1) {
                q.pop();
            }
            if (q.empty()) {
                return -1;
            }
        }
        return q.front();
    }
};