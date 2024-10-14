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
class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode* temp = head;
        stack<int>s;
        while(temp){
            s.push(temp->val);
            temp = temp->next;
        }
        int maxi=0;
        while(s.size()){
            maxi = max(maxi, s.top()+head->val);
            head = head->next;
            s.pop();
        }
        return maxi;
    }
};