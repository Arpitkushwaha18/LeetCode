/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
    int result = head->val;
    struct ListNode* temp = head->next;

    while(temp!=NULL){
        result = result*2+temp->val;
        temp = temp->next;
    }
    return result;

    

    
}