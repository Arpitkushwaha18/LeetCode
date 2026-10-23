/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head) {
    struct ListNode odd  ;
    odd.next=head;
    

    struct ListNode even ;
    even.next =head;
    struct ListNode* oddp=&odd;
    struct ListNode* evenp = &even;
    int c=1;
    while(head!=NULL){
        if(c%2!=0){
            oddp->next=head;
            oddp=oddp->next;

        }
        else{
            evenp->next=head;
            evenp=evenp->next;
        }
        head=head->next;
        c++;
    }

    evenp->next=NULL;
    oddp->next=even.next;
    return odd.next;
    
}