/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* dummy = malloc(sizeof(struct ListNode));
      dummy->next = NULL;
    struct ListNode* merge = dummy;
    while(list1!=NULL&&list2!=NULL){
        

             
        if(list1->val<=list2->val){
            merge->next = list1;
            list1=list1->next;
        }
        else{
            merge->next=list2;
            list2=list2->next;
        }
        merge = merge->next;
        
        
        
    }
    while(list1!=NULL){
        
             merge->next =list1;
             list1=list1->next;
             merge = merge->next;
        
    }

    while(list2!=NULL){
         merge->next=list2;
            
             list2=list2->next;
             merge = merge->next;
        
    }




    return dummy->next;
    
}