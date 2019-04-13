int Solution::reverse(int A) {
    long long int ans = 0;
    int flag = 0;
    
    if(A == INT_MIN) 
        return 0;
    
    if(A<0){
        flag = 1;
        A = -1 * A;
    }
    
    while(A!=0){
        int k = A%10;
        ans = ans * 10 + k ;
        A = A/10;

    }
    
    if(ans>INT_MAX) return 0;
    
    if(flag == 1)
        return (int)(-1*ans);
    
    return (int)(ans);
    
}
