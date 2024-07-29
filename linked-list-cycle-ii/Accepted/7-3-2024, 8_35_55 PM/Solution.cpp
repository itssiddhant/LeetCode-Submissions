// https://leetcode.com/problems/linked-list-cycle-ii

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {

public:
    ListNode* hasCycle(ListNode* head){
        struct ListNode* slow = head;
        struct ListNode* fast = head;

        while(slow!=NULL && fast != NULL){
            fast = fast->next;
            if(fast!=NULL){
                fast = fast->next;
            }
            slow = slow->next;

            if(slow==fast){
                return slow;
            }
        }
        return NULL;
    }
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next == NULL){
            return NULL;
        }
        struct ListNode* intersection = hasCycle(head);
        if(intersection==NULL){
            return NULL;
        }
        struct ListNode* slow = head;

        while(slow!=intersection){
            slow = slow->next;
            intersection = intersection->next;
        }
        return slow;
    }
};