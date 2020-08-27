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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Creating a Dummy Node
        ListNode temp(0);
        
        // Creating an iterator for this dummy node
        ListNode * itr = &temp;
        int carry = 0, sum = 0;
        
        // Creating iterators for both the list
        ListNode * first = l1;
        ListNode * second = l2;
        
        while(first != NULL || second != NULL){
            
            // finding the sum of digits of both the lists
            sum = (first == NULL ? 0 : first->val) + (second == NULL ? 0 : second->val) + carry;
            
            carry = sum/10;
            sum %= 10;
            itr->next = new ListNode(sum);
            itr = itr->next;
            
            if(first != NULL ) first = first->next;
            if(second != NULL) second = second->next;
            
            if(carry > 0)
                itr->next = new ListNode(carry);
        }
        return temp.next;
    }
};
