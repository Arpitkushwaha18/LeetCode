/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeNodes(struct ListNode* head) {
    struct ListNode dummy ={0,NULL};
    struct ListNode *temp =&dummy;
    head=head->next;
    int sum =0;
    while(head!=NULL){
        if(head->val==0){
           struct ListNode *newNode = malloc(sizeof(struct ListNode));

            newNode->val = sum;
            newNode->next = NULL;

            temp->next = newNode;
            temp = newNode;

            sum = 0;
        }
        else{
            sum+=head->val;
        

        }
        head=head->next;
    }
    return dummy.next;

    
}