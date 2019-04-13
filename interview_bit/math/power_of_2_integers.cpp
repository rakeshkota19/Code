int Solution::isPower(int A) {
    int i = 0, j = 1;
    long long int ans;
    
    if(A == 0)
        return 1;
    for(int i = 1 ; i < A; i++){
        if(A%i == 0)
        {

        for(int j = 1; j < A ; j++)
        {
            ans = pow(i,j);
            if(ans>A)
                break;
            if(ans == A)
                return 1;
        }
        }
    }
    
    return 0;
    
}
