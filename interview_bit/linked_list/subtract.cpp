/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
typedef ListNode node;

ListNode* Solution::subtract(ListNode* A) {
    
    node *slow = A, *fast = A,*end = A;

    while(fast != NULL && fast->next != NULL){
        end = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    
    if( slow == A)
        return A;
    
    cout<<slow->val<<endl;

    end->next = NULL;
    node *curr, *prev, *next;
    curr = slow;
    prev = NULL;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    
    node *head = prev;

    node *pre = A, *ptr = head;
    node *temp,*temp1;
    
    while(pre != NULL && ptr != NULL)
    {
        pre->val = ptr->val-pre->val;
        pre = pre->next;
        ptr = ptr->next;
    }
    

    curr = head;
    prev = NULL;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    
    while(pre != NULL && pre->next != NULL)
        pre = pre->next;
        
    // prev is head of list
    pre->next = prev;
    
    return A;
}


