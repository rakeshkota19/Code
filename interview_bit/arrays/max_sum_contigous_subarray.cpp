int Solution::maxSubArray(const vector<int> &A) {
    int sum = INT_MIN,a = 0;
    int size = A.size();
    
    for(int i = 0 ; i < size; i++) {
        a = a + A[i];
        if(a>sum) sum = a;
        if(a<0) a = 0;
    }
    return sum;
}
