/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
typedef ListNode node;
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    
    node *ptr  = A;
    int count = 0;
    
    while(ptr != NULL)
    {
        ptr = ptr->next;
        count++;
    }
    
    ptr = A;
    
    if(count <= B)
        return A->next;

    count = count - B;
    
    node *pre;
    
    while(count > 1){
        pre = pre->next;
        ptr = pre->next;
        count--;
    }
    

    pre->next = ptr->next;
    
    return A;
}
