class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>occ;
        for(int o: arr){
            occ[o]++;
        }
        unordered_set<int>seen;
        for(const auto&pair : occ){
            if(seen.find(pair.second)!=seen.end()) return false;
            seen.insert(pair.second);
        }
        return true;
    }
};