int Solution::kthsmallest(const vector<int> &A, int B) {
    int size = A.size(), minimum = INT_MAX, maximum = INT_MIN;
    
    for(int i = 0 ; i < size ; i++){
        
        if(minimum > A[i]) minimum = A[i];
        if(maximum < A[i]) maximum = A[i];
    }
    
    int low = minimum, high = maximum;
    
    while(low <= high){
        
        int mid = (low + high)/2;
        
        int diff_count = 0, same_count = 0;
        
        for(int i = 0 ; i < size; i++){
            
            if(A[i] == mid) same_count++;
            if(A[i] < mid) diff_count++;
        }
        
        if( diff_count < B && diff_count + same_count >= B)
            {
                    return mid;
            }
        else if(same_count + diff_count < B)
            low = mid+1;
        else
            high = mid - 1;
        
    }
}
