class Solution {
public:
    int magnificentSets(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adjList(n);
        for (auto& e : edges) {
            int node1 = e[0] - 1, node2 = e[1] - 1;
            adjList[node1].push_back(node2);
            adjList[node2].push_back(node1);
        }
        vector<int> nodeDistances(n);
        for (int i = 0; i < n; ++i) {
            queue<int> nodeQueue{{i}};
            vector<int> distance(n);
            distance[i] = 1;
            int maxi = 1;
            int root = i;
            while (!nodeQueue.empty()) {
                int top = nodeQueue.front();
                nodeQueue.pop();
                root = min(root, top);
                for (int neighbor : adjList[top]) {
                    if (distance[neighbor] == 0) {
                        distance[neighbor] = distance[top] + 1;
                        maxi = max(maxi, distance[neighbor]);
                        nodeQueue.push(neighbor);
                    } else if (abs(distance[neighbor] - distance[top]) != 1) {
                        return -1;
                    }
                }
            }
            nodeDistances[root] = max(nodeDistances[root], maxi);
        }
        return accumulate(nodeDistances.begin(), nodeDistances.end(), 0);
    }
};