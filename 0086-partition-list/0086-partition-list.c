/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode* createNode(int value){
    struct ListNode* newNode= malloc(sizeof(struct ListNode));
    newNode->val=value;
    newNode->next =NULL;
    return newNode;
 }
struct ListNode* partition(struct ListNode* head, int x) {
    struct ListNode* small=createNode(0);
    struct ListNode* large=createNode(0);
    struct ListNode* smallp=small;
    struct ListNode* largep=large;
    //struct ListNode smalldummy;
    //struct ListNode largedummy;
    //smalldummy.next=head;
    //largedummy.next=head;
    //struct ListNode* small=&smalldummy;
    //struct ListNode* large=&largedummy;
    struct ListNode* temp=head;
    while(temp!=NULL){
        if(temp->val<x){
            smallp->next=temp;
            smallp=smallp->next;
        }
        else{
            largep->next=temp;
            largep=largep->next;
        }
        temp=temp->next;
    }
     largep->next = NULL;
    
    smallp->next = large->next;
   
    return small->next;

    
}