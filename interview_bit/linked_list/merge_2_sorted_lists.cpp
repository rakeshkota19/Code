/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
typedef ListNode node;

ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    
    node *pre = A, *ptr = B;
    node *start = NULL, *end = NULL;
    
    while(pre != NULL && ptr!= NULL){
        
        if(pre->val <= ptr->val){
            
            if(start == NULL)
                {
                    start = pre;
                    end = start;
                }
            else
                {
                    end->next = pre;
                    end = pre;
                }
            
            pre = pre->next;
        }
        else 
        {
            
            if(start == NULL){
                start = ptr;
                end = start;
            }
            else{
                end->next = ptr;
                end = ptr;
            }
            
            ptr = ptr->next;
        }
        
    }
    
    
    while(pre != NULL){
        if(start == NULL)
                {
                    start = pre;
                    end = start;
                }
            else
                {
                    end->next = pre;
                    end = pre;
                }
            
            pre = pre->next;
    }
    
    
    while(ptr != NULL){
        if(start == NULL){
                start = ptr;
                end = start;
            }
            else{
                end->next = ptr;
                end = ptr;
            }
            
            ptr = ptr->next;
    }

    return start;
}
