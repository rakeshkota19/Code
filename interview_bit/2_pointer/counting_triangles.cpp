int Solution::nTriang(vector<int> &A) {
    int size  = A.size();
    int ans = 0;
    sort(A.begin(), A.end());

    for(int i = 0 ; i  < size - 2 ; i++){
        
        int k = i+2;
        
        for(int j = i+1; j < size - 1 ; j++){
            
            while( A[i] + A[j] > A[k] && k < size)
                k++;
            
            ans +=(k-j-1);
        }
     
     
    }
    return ans;
}
