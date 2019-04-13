unsigned int Solution::reverse(unsigned int A) {
    if(A==UINT_MAX) return A;

    unsigned int B = 0;
    int count = 31;
    while(count--){
        if(A&1) B+=1;
        A = A>>1;
        B = B<<1;
      //  cout<<B<<endl;
    }
    return B;
}
