class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        vector<int> pref(n+1, 0);
        unordered_set<char> v = {'a','e','i','o','u'}; 
        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i];
            if (v.count(words[i].front()) && v.count(words[i].back())) {
                pref[i + 1]++;  
            }
        }
        vector<int> res; 
        for (auto& query:queries) {
            int L=query[0], R=query[1];  
            res.push_back(pref[R + 1] - pref[L]);  
        }
        return res;
    }
};