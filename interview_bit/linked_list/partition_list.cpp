/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
typedef ListNode node;
ListNode* Solution::partition(ListNode* A, int B) {
    node *pre = NULL, *ptr = A;
    
    while(ptr != NULL){

        if(ptr->val >=B)
            break;
        
        pre = ptr;
        ptr = ptr->next;
        
    }

    node *temp1 = ptr, *temp2 = ptr;
    
    while( temp2 != NULL){
        
        if(temp2 -> val < B){
            
            if(pre != NULL)
                pre->next = temp2;
            else
                A = temp2;
                
            pre = temp2;
            temp1->next = temp2->next;
        }
        else
            temp1 = temp2;
    
        temp2 = temp2->next;
    }
    if(pre != NULL)
        pre->next = ptr;
    return A;
}
