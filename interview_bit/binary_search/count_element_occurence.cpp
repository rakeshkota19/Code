int Solution::findCount(const vector<int> &A, int B) {
    
    int size = A.size();
    int left_val = INT_MAX, right_val = INT_MIN;
    
    // finding left most occurence
    
    int low = 0, high = size - 1;
    
    while(low < high) {

       int  mid = (low+high)/2;
        if(A[mid] >= B) { 

            if(left_val > mid && A[mid] == B) 
                left_val  = mid;
                
            high = mid-1;
            }
        else
            low = mid+1;
    }
    
    if(left_val == INT_MAX)
        return 0;
    
    //finding right most occurence
    
    low = 0, high = size - 1;

    while(low < high) {
        
        int mid = (low+high)/2;
        if(A[mid] <= B) { 
            
            if(right_val < mid && A[mid] == B) 
                right_val = mid;
                
            low = mid+1;
            }
        else
            high = mid-1;
    }

    return right_val-left_val+1;
    
}
