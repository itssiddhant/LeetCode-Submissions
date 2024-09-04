class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> count;
        queue<int> q;

        for (int i = 0; i < s.length(); i++) {
            int ch = s[i];
            count[ch]++;

            q.push(i);

            while (!q.empty() && count[s[q.front()]] > 1) {
                q.pop();
            }
            
        }
        return q.empty() ? -1 : q.front();
    }
};