int Solution::removeElement(vector<int> &A, int B) {
    int size = A.size();
    int i = 0 , j = 0,count = 0;
    
    while( i < size){
        if(A[i] != B)
            {
                int temp = A[j];
                A[j] = A[i];
                A[i] = temp;
                count++;
                j++;
            }
        
        i++;
    }
    
    return count;
}