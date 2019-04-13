vector<int> Solution::plusOne(vector<int> &A) {
    reverse(A.begin(), A.end());
    int size = A.size(), carry = 0;
    A[0] = (A[0]+1)%10;
    if(A[0] == 0)
        carry = 1;
    
    if(carry == 1){
        for(int i = 1 ; i < size ; i++){
            A[i] = (A[i]+carry)%10;
            if(A[i] != 0)
            {
                carry = 0;
                break;
            }
            else 
                carry = 1;
        
        }
    }

    int i = size-1;
    for(;i>=0;i--){
        if(A[i] != 0)
            break;
    }

    if(carry == 1)
        A.push_back(1);

    if(i!=size-1) 
        A.erase(A.begin()+i+1,A.begin()+size);
    
    
    
    reverse(A.begin(), A.end());
    
    return A;
        
    
}
