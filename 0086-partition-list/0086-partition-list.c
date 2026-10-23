/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* partition(struct ListNode* head, int x) {
    struct ListNode smalldummy;
    struct ListNode largedummy;
    smalldummy.next=head;
    largedummy.next=head;
    struct ListNode* small=&smalldummy;
    struct ListNode* large=&largedummy;
    struct ListNode* temp=head;
    while(temp!=NULL){
        if(temp->val<x){
            small->next=temp;
            small=small->next;
        }
        else{
            large->next=temp;
            large=large->next;
        }
        temp=temp->next;
    }
    large->next = NULL;
    small->next = largedummy.next;
    return smalldummy.next;

    
}