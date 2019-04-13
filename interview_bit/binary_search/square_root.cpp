int Solution::sqrt(int A) {

    long long int low  = 0;
    long long int high = A;
    long long int ans = 0;
    while(low <= high){
        long long int mid = (low + high)/2;
        if(mid * mid == A)
            return mid;
        if(mid*mid > A)
            high = mid-1;
        else{
            ans = mid;
            low = mid + 1;
        }
    }
    
    return ans;
}