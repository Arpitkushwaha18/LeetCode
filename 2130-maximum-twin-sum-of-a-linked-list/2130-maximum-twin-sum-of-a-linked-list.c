/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int pairSum(struct ListNode* head) {
    struct ListNode* slow= head;
    struct ListNode* fast =head;
    while(fast!=NULL&&fast->next!=NULL){
        
        slow=slow->next;
        fast = fast->next->next;
    }
    struct ListNode* prev=NULL;
    while(slow!=NULL){
        struct ListNode* next=slow->next;
        slow->next =prev;
        prev=slow;
        slow=next;
    }
    int max= prev->val+head->val;
    head=head->next;
    prev=prev->next;
    while(prev!=NULL){
        if((prev->val+head->val)>max){
            max=prev->val+head->val;
        }
        prev=prev->next;
        head=head->next;

    }
    return max;


    
}