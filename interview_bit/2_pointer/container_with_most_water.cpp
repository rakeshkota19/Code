int Solution::maxArea(vector<int> &A) {
    int size  = A.size();
    
    int ans = INT_MIN, left_max = INT_MIN, right_max = INT_MIN;
    int j = size - 1, i  = 0;

    while(i <= j){
        int val = min(A[i], A[j]) * (j - i);
        if(val > ans)
            ans = val;
        
        if(A[i] < A[j])
            i++;
        else
            j--;
        
    }
    
    return ans;
    
}
