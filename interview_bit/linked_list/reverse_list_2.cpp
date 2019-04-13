/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
typedef ListNode node;

ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    
    node *pre = NULL, *ptr = A;
    int count = 0;

    while(ptr != NULL){
        count++;
        
        if(count == B)
            break;
        pre = ptr;
        ptr = ptr->next;
    }
    
    node *prev = NULL;
    node *curr = ptr;
    node *next;

    while(count <= C){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if(pre != NULL)
        pre->next = prev;
    else
        A = prev;
    
    ptr->next = curr;

    return A;
}
