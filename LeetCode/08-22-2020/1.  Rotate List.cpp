class Solution {
public:
    int length(ListNode* head){
        int count = 0;
        ListNode * temp = head;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        int l = length(head);
        if(l == 0) return NULL;
        k = k%l;
        ListNode * fast = head;
        ListNode * slow = head;
        ListNode * q = NULL;
        if(k == 0)
            return head;
        while(k--){
            fast = fast->next;
        }
        while(fast != NULL){
            q = slow;
            slow = slow->next;
            fast = fast->next;
        }
        q->next = NULL;
        ListNode * start = slow;
        while(slow->next != NULL)
            slow = slow->next;
        slow->next = head;
        return start;
    }
};
