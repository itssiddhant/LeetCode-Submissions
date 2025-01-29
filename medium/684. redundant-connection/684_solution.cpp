class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        vector<int> p(2000, 0);
        for(int i = 0; i < p.size(); i++ )
            p[i] = i;
        
        vector<int> res;
        for(auto e : edges ){
            int a = e[0], b = e[1];
            while(a != p[a]) a = p[a];
            while(b != p[b]) b = p[b];
            if( a == b )
                res = e;
            else
                p[a] = b;
        }
        return res;
    }
};