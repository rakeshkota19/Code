bool Solution::hotel(vector<int> &A, vector<int> &B, int k) {
     sort(A.begin(), A.end());
     sort(B.begin(), B.end());
    
    int j = 0;
    k--;
    for( int i = 1; i < A.size(); i++) {
        

        if(A[i] < B[j]){
         if(k == 0) return 0;
         k--;
        }

        else{
            j++;
        }
    }
    if(k<0) 
        return 0;
    return 1;
}
