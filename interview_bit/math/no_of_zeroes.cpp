int Solution::trailingZeroes(int A) {
    int k = A, sum = 0;
    while(k>0){
        k = k/5;
        sum+=k;
    }
    return sum;
}