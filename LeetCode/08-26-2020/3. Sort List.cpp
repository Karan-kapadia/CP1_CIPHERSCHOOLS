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
    ListNode * mergeSort(ListNode * left, ListNode * right){
        ListNode sorted(0);
        ListNode * itr = &sorted;
        
        while(left != NULL && right != NULL){
            if(left->val < right->val){
                itr->next = left;
                itr = itr->next;
                left = left->next;
            }
            else{
                itr->next = right;
                itr = itr->next;
                right = right->next;
            }
        }
        
        if(left != NULL) itr->next = left;
        if(right != NULL) itr->next = right;
        
        return sorted.next;
    }
    
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        
        ListNode * temp = head;
        ListNode * fast = head;
        ListNode * slow = head;
        
        // Splitting list into 2 halves
        while(fast != NULL && fast->next != NULL){
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        temp->next = NULL;
        // Now head = start of Left List, temp = end of Left List
        // slow = start of right list, fast = end of right list
        
        ListNode * leftSide = sortList(head);
        ListNode * rightSide = sortList(slow);
        
        return mergeSort(leftSide, rightSide);
    }
};
