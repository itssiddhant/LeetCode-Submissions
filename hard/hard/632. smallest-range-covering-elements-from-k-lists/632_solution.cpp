#include <limits.h>
#include<queue>
#include <bits/stdc++.h>
class Node{
    public:
    int data;
    int row;
    int col;

    Node(int data, int row, int col){
        this->data = data;
        this->row = row;
        this->col=col;
    }
};
class compare{
    public:
    bool operator()(Node*a, Node*b){
        return a->data > b->data;
    }
};
class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        priority_queue<Node*,vector<Node*>,compare> minHeap;
        vector<int>ans;
        int k = nums.size();
        int maxi = INT_MIN;
        int mini = INT_MAX;
        int length = 0;
        for(int i =0; i<k;i++){
            int element = nums[i][0];
            mini = min(mini,element);
            maxi = max(maxi,element);
            minHeap.push(new Node(element, i ,0));
        }

        int start = mini, end = maxi;

        while(!minHeap.empty()){
            Node* temp = minHeap.top();
            minHeap.pop();
            mini = temp->data;
            if(maxi-mini <end-start){
                start = mini;
                end = maxi;
            }
            if(temp->col +1 <nums[temp->row].size()){
                int element = nums[temp->row][temp->col+1];
                maxi = max(maxi,element);
                minHeap.push(new Node(element,temp->row,temp->col+1));
            }
            else{
                break;
            }
        }
        ans.push_back(start);
        ans.push_back(end);
        return ans;
    }
};