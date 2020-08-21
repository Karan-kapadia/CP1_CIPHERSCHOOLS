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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL)
            return NULL;
        ListNode * a1 = headA;
        ListNode * b1 = headB;
        while(a1 != b1){
            a1 = a1->next;
            b1 = b1->next;
            if(a1 == b1)
                return a1;
            if(a1 == NULL)
                a1 = headB;
            if(b1 == NULL)
                b1 = headA;
        }
        return a1;
    }
};
