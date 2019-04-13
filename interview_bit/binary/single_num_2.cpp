int Solution::singleNumber(const vector<int> &A) {
    int size = A.size();
    
    int bit[33];
    memset(bit,0,sizeof(bit));
    
    
    for(int i = 0 ; i < A.size() ; i++) {
        
        int a = A[i];
        int count = 0;

        while(a>0){
            
            if(a&1)
                bit[count]++;
            
            a = a>>1;
            count++;
        }
    }
    
    int ans = 0;

    for(int i = 0 ; i < 33 ; i++) {

        bit[i]%=3;

        if(bit[i])
            ans = ans+pow(2,i);
    }
        
    return ans;
}
