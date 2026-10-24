/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void reorderList(struct ListNode* head) {
    if (head == NULL || head->next == NULL){
    return;}
    struct ListNode*   start= head;
    struct ListNode*   tempp;
    

    struct ListNode*   slow= head;
    struct ListNode*   fast= head;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    struct ListNode* temp = slow->next;
    slow->next = NULL;
    struct ListNode* prev = NULL;
    

    while(temp!=NULL){
        struct ListNode* next = temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
        }
    while(prev!=NULL){
    tempp = start->next;
    struct ListNode* next = prev->next;

    start->next = prev;
    prev->next = tempp;

    start = tempp;
    prev = next;
}
        
    
    return ;

    
}