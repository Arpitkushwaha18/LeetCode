/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* temp = head;
    int i=0;
    while(temp!=NULL){
        i++;
        temp=temp->next;

    }
    if (n == i) {
    temp = head;
    head = head->next;
    free(temp);
    return head;
}
    temp =head;
    int m =0;
    while(temp!=NULL&&temp->next!=NULL){

        if(n==(i-m-1)){
              struct ListNode* deleteNode = temp->next;
              temp->next = deleteNode->next;
            
          

        

        free(deleteNode);
            
        }
        temp = temp->next;
        m++;
        
    }
    return head;

    
}