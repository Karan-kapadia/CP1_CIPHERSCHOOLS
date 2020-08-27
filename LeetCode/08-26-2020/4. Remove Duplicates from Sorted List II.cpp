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
    ListNode* deleteNode(ListNode* &head, int val){
        while(head && head->val == val){
            head = head->next;
        }
        if(!head) 
            return head;
        ListNode * temp = head;
        while(temp->next){
            if(temp->next->val == val){
                temp->next = temp->next->next;
            }
            else{
                temp = temp->next;
            }
        }
        return head;
    }
    
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL)
            return head;
        ListNode * temp = head;
        int data = head->val;
        vector<int> dl;
        while(temp->next != NULL){
            if(temp->next->val == data){
                dl.push_back(data);
                temp->next = temp->next->next;
                data = temp->val;
            }
            else{
                temp = temp->next;
                data = temp->val;
            }
        }
        for(int i=0; i<dl.size(); i++){
            head = deleteNode(head, dl[i]);
        }
        return head;
    }
};
