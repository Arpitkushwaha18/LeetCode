/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode* createNode(int value){
    struct ListNode* newNode= malloc(sizeof(struct ListNode)) ;
    newNode->val= value;
    newNode->next = NULL;
    return newNode;
 }
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    
    struct ListNode* curr= createNode(0);
    struct ListNode* dummy =curr;
    int carry=0;
    
    while(l1!=NULL||l2!=NULL||carry!=0){
        int sum =carry;
        if(l1!=NULL){
            sum+=l1->val;
            l1=l1->next;
             }
        if(l2!=NULL){
            sum+=l2->val;
            l2=l2->next;
             }
    curr->next = createNode(sum%10);
    curr=curr->next;
    carry = sum/10;
    }
    //struct ListNode* resultHead = dummy->next;



    

    
    return dummy->next;
    
    


    
}