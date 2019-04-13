/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
typedef ListNode node;

ListNode* Solution::deleteDuplicates(ListNode* A) {
    
    node *pre = A, *ptr = A;
    
    while( ptr != NULL){

        if(pre->val == ptr->val)
            ptr = ptr->next;
        
        else
            {
                pre->next = ptr;
                pre = ptr;
                ptr = ptr->next;
            }
    }
    
    if(ptr == NULL)
        pre->next  = NULL;

    return A;
}
