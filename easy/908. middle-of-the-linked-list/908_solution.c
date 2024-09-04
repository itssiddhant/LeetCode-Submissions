/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    int count = 0;
    int mid = 0;
    struct ListNode* temp = head;
    while (head != NULL) {
        count++;
        head = head->next;
    }

    mid = count / 2;

    int cnt = 0;
    while (cnt < mid) {
        temp = temp->next;
        cnt++;
    }
    return temp;
}