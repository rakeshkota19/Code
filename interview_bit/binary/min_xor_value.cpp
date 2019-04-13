int Solution::findMinXor(vector<int> &A) {
    
    sort(A.begin(), A.end());
    
    int size = A.size();
    int max = INT_MAX;
    
    for(int i =  1 ; i < size ; i++){
        if(A[i]^A[i-1] < max)
            max = A[i]^A[i-1];
        cout<<(A[i]^A[i-1]);
    }
    return max;
}
