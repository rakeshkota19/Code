/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
typedef ListNode node;

int Solution::lPalin(ListNode* A) {
    
    node *ptr = A;
    vector<int>v;

    while( ptr != NULL){
        v.push_back(ptr->val);
        ptr = ptr->next;
    }
    
    int size = v.size();
    int i = 0, j = size - 1;
    
    while(i <j){
        if(v[i] == v[j])
        {
            i++;
            j--;
        }
        else
            return 0;
    }
    return 1;
}
