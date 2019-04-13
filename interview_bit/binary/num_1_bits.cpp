int Solution::numSetBits(unsigned int A) {

    int count = 0;
    
    while(A>0){
        count++;
        A = A&(A-1);
    }
    
    return count;
    
}
