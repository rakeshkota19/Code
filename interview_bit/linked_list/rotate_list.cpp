/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 
typedef ListNode node;
ListNode* Solution::rotateRight(ListNode* A, int B) {
    node *ptr  = A;
    int count = 0;
    
    while(ptr != NULL)
    {
        ptr = ptr->next;
        count++;
    }
    
    ptr = A;
    
    B = B % (count);

    if(B == 0)
        return A;

    count = count - B;
    node *pre = A;
    ptr = pre->next;

    while(count> 1){
        pre = pre->next;
        ptr = pre->next;
        count--;
    }
    
    pre->next = NULL;
    
    node * temp = ptr;
    
    while(ptr!= NULL && ptr->next != NULL )
        ptr = ptr->next;
        
    ptr->next = A;
    
    
    return temp;
}
