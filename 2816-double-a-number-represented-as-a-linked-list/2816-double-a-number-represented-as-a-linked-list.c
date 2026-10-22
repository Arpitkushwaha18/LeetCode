/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode* createNode(int value){
    struct ListNode* newNode = malloc(sizeof(struct ListNode));
    newNode->val=value;
    newNode->next = NULL;
    return newNode;
 }
 struct ListNode* reverse(struct ListNode* head){
    struct ListNode* current=head;
    struct ListNode* prev=NULL;
    struct ListNode* next=NULL;
    while(current!=NULL){
        next=current->next;
        current->next =prev;
        prev=current;
        current =next;
        }
        return prev;
 }
struct ListNode* doubleIt(struct ListNode* head) {
    head=reverse(head);
    struct ListNode* curr = createNode(0);
    struct ListNode* dummy=curr;
    int carry=0;
    while(head!=NULL||carry!=0){
         int mul =carry;
        if(head!=NULL){
            mul+=2*(head->val);
            head=head->next;
        }
         
    curr->next = createNode(mul%10);
    curr=curr->next;
    carry = mul/10;
    }
    
    return reverse(dummy->next);
    
}