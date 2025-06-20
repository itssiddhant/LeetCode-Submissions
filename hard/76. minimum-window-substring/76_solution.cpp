class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty())
            return "";

        unordered_map<char, int> mapT;
        unordered_map<char, int> window;

        for (char c : t)
            mapT[c]++;
        int have = 0;
        int need = mapT.size();
        int left = 0;
        int minLen = INT_MAX, minStart = 0;

        for (int right = 0; right < s.length(); right++) {
            char c = s[right];
            window[c]++;
            if (mapT.count(c) && window[c] == mapT[c]) {
                have++;
            }
            while (have == need) {
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    minStart = left;
                }
                window[s[left]]--;
                if (mapT.count(s[left]) && window[s[left]] < mapT[s[left]]) {
                    have--;
                }
                left++;
            }
        }
        return minLen == INT_MAX ? "" : s.substr(minStart, minLen);
    }
};