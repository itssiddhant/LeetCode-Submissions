/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* dfs(Node* curr,unordered_map<Node*,Node*> &map){
        vector<Node*> neighbour;
        Node* clone = new Node(curr->val);
        map[curr]=clone;
        for(auto i: curr->neighbors){
            if(map.find(i)!=map.end()){
                neighbour.push_back(map[i]);
            }
            else{
                neighbour.push_back(dfs(i,map));
            }
        }
        clone->neighbors=neighbour;
        return clone;
    }
    Node* cloneGraph(Node* node) {
        unordered_map<Node*,Node*> map;
        if(node==NULL) return NULL;
        if(node->neighbors.size()==0){
            Node* clone = new Node(node->val);
            return clone;
        }
        return dfs(node,map);
    }
};