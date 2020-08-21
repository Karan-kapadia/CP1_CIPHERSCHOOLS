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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL && l2 == NULL)
            return NULL;
        if(l1 == NULL)
            return l2;
        if(l2 == NULL)
            return l1;
        
        ListNode * head = new ListNode();
        ListNode * temp = head;
        while(l1 != NULL && l2 != NULL){
            int v1 = l1->val;
            int v2 = l2->val;
            if(v1 <= v2){
                temp->val = v1;
                l1 = l1->next;
            }
            if(v2 < v1){
                temp->val = v2;
                l2 = l2->next;
            }
            if(l1 != NULL && l2!= NULL){
                temp->next = new ListNode();
                temp = temp->next;
            }
        }
        if(l1 != NULL)
            temp->next = l1;
        if(l2 != NULL)
            temp->next = l2;
        
        return head;
    }
};
