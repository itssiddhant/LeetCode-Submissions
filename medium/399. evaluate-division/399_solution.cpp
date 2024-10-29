class Solution {
    unordered_map<string, vector<pair<string, double>>> u;
    unordered_map<string, bool> visited;
    double res;
public:
    bool dfs(string startNode, string endNode, double runningProduct){
        if(u.find(startNode) == u.end() || u.find (endNode) == u.end()) {
            return false;
        }
        if(startNode == endNode and u.find(startNode)!=u.end()) {
            res = runningProduct;
            return true;
        }
        bool tempAns = false;
        visited[startNode] = true;
        for(int i = 0; i < u[startNode].size(); i++){
            if(!visited[u[startNode][i].first]){
                tempAns = dfs(u[startNode][i].first, endNode, runningProduct*u[startNode][i].second);
                if(tempAns){
                    break;
                }
            }
        }
        visited[startNode] = false;
        return tempAns;
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {   
        int n = equations.size(), m = queries.size();
        vector<double> ans(m);
        for(int i = 0; i < n ; i++){
            u[equations[i][0]].push_back({equations[i][1], values[i]});
            u[equations[i][1]].push_back({equations[i][0], 1/values[i]});
            visited[equations[i][0]] = false;
            visited[equations[i][1]] = false;
        }
        for(int i = 0; i < m ; i++){
            res = 1;
            bool pathFound = dfs(queries[i][0], queries[i][1], 1);            
            if(pathFound) ans[i] = res;
            else ans[i] = -1;
        }
        return ans;
    }
};