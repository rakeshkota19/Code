typedef long long int ll;
int Solution::threeSumClosest(vector<int> &A, int B) {
    
    int size = A.size();
    ll ans = INT_MAX,anss;
    int di = pow(10,9)+7;
    sort(A.begin(), A.end());
    
    int high = size-1;

    for(int i =  0 ; i < size-2 ; i++){
    
        int j = i + 1;

        while(j < high) {
        
        ll val = A[i]+A[j]+A[high];
         
        if(abs(val-B) < ans){
            ans = abs(val-B);
            anss = val%di;
         }
         
         if(val - B == 0) 
            return B;

         if(val - B > 0)
            high--;
        
        if(val - B <  0)
            j++;
        }
    }
    
    return anss;
}
