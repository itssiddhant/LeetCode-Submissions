// https://leetcode.com/problems/merge-k-sorted-lists

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 #include<queue>

 class compare{
    public:
        bool operator()(ListNode*a, ListNode*b){
            return a->val > b->val;
        }
 };
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*> , compare> minHeap;
        int n = lists.size();

        for( int i=0; i<n; i++){
            if(lists[i]){
                minHeap.push(lists[i]);
            }
        }
        ListNode* head = NULL;
        ListNode* tail =NULL;

        while(minHeap.size()>0){
           ListNode* top = minHeap.top();
            minHeap.pop();
            if(top->next){
                minHeap.push(top->next);
            }

            if(head == NULL){
                head = top;
                tail=top;
            }
            else{
                tail->next = top;
                tail = top;
            }
        }
        return head;
    }
};