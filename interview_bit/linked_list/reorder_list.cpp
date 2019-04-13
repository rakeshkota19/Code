/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
typedef ListNode node;

ListNode* Solution::reorderList(ListNode* A) {
    node *slow = A, *fast = A;

    while(fast != NULL && fast->next != NULL){

        slow = slow->next;
        fast = fast->next->next;
    }
    
    //if( slow == A)
      //  return A;
    
   // cout<<slow->val<<endl;

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
   // cout<<head->val<<endl;
    node *pre = A, *ptr = head;
    node *temp,*temp1;
    
    while(pre != NULL && ptr != NULL){
        
     //   cout<<pre->val<<" "<<ptr->val<<endl;
        temp = pre->next;
        temp1 = ptr->next;
        pre->next = ptr;
        ptr->next = temp;
        ptr = temp1;
        pre = temp;
    }
    if(pre != NULL)
        pre->next = NULL;

    if(ptr!=NULL)
        {
            cout<<ptr->val<<endl;
            pre->next = ptr;
            ptr->next = NULL;
        }
    
    return A;
}
