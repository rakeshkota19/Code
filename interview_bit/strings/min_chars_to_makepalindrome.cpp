int Solution::solve(string A) {
    
    int size = A.size();
    
    for(int i = size - 1 ; i >= 0 ; i--){
        
        int k  = i, j = 0;
        
        while(k >= j){

            if(k == j ){
                return  (size - i-1);
            }
            
            if(A[k] == A[j])
                {
                    if(k == j + 1)
                        return (size - i - 1);
                    k--;
                    j++;
                }
            else
                break;
        }
    }
}
