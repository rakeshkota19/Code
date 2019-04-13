int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    
    int i = 0,j = 0 , k = 0;
    int l,m,r,ans = INT_MAX;
    
    l = A.size(), m = B.size(), r = C.size();
    
    while(i<l && j<m && k<r){
        
        int  a = A[i], b = B[j], c = C[k];
        
        int d = max(a,max(b,c)) - min(a,min(b,c));

        if(ans > d)
            ans = d;
        
        d = min(a,min(b,c));
        
        if(d == a) i++;
        else if(d==b) j++;
        else k++;
    }
    return ans;
}
