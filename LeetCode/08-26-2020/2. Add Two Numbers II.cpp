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
    ListNode * reverse(ListNode * head){
        ListNode * curr = head;
        ListNode * prev = NULL;
        ListNode * next;
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode temp(0);
        ListNode * itr = &temp;
        int sum = 0, carry = 0;
        ListNode * first = reverse(l1);
        ListNode * second = reverse(l2);
        
        while(first != NULL || second != NULL){
            sum = (first == NULL ? 0 : first->val) + (second == NULL ? 0 : second->val) + carry;
            carry = sum/10;
            sum %= 10;
            
            itr->next = new ListNode(sum);
            itr = itr->next;
            if(first != NULL) first = first->next;
            if(second != NULL) second = second->next;
            
            if(carry>0){
                itr->next = new ListNode(carry);
            }
        }
        //reverse(temp);
        return reverse(temp.next);
    }
};
