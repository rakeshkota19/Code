int Solution::singleNumber(const vector<int> &A) {
    int size = A.size();
    int xor_value = 0;
 
    for(int i = 0; i < size ; i++)
        xor_value ^= A[i];
    
    return xor_value;
}