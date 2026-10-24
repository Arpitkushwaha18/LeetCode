/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* insertGreatestCommonDivisors(struct ListNode* head) {
    struct ListNode* temp=head;
    while(temp->next!=NULL){
        int a=temp->val;
        int b=temp->next->val;
        while(b!=0){
            int c=b;
            b=a%b;
            a=c;
        }
    struct ListNode* gcd=malloc(sizeof(struct ListNode));
    gcd->val=a;
    gcd->next=temp->next;
    temp->next=gcd;
    temp=temp->next->next;

    }
    return head;
    
}