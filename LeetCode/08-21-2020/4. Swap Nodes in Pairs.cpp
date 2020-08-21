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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode * start = new ListNode();
        start->next = head;
        ListNode * d = start;
        
        while(d->next != NULL && d->next->next != NULL){
            ListNode * ptr = d->next;
            ListNode * qtr = d->next->next;
            ptr->next = qtr->next;
            d->next = qtr;
            qtr->next = ptr;
            d = ptr;
        }
        return start->next;
    }
};
