/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


bool isPalindrome(struct ListNode* head) {
    if (head == NULL || head->next == NULL)
    return true;

    struct ListNode * slow =head;
    struct ListNode * fast =head;
    struct ListNode * temp=NULL;
    while(fast!=NULL&&fast->next!=NULL){
        
        slow=slow->next;
        fast=fast->next->next;
    }
    if (fast != NULL){
        slow = slow->next;
        }
    temp = slow;
    struct ListNode* prev= NULL;
    
    while(temp!=NULL){
        struct ListNode* next = temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
}
while(prev!=NULL){
    if(head->val!=prev->val){
        return false;
    }
    head=head->next;
    prev=prev->next;
}

return true;



    
}