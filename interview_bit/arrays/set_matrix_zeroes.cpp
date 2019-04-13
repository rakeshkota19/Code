
int Solution::firstMissingPositive(vector<int> &A) {
    int i = 0 , size = A.size();

    for(int k = 0 ; k < size ; k++){
        if(A[k] <= 0){
            int temp = A[k];
            A[k] = A[i];
            A[i] = temp;
            i++;
        }
    }

    A.erase(A.begin(),A.begin()+i);
    size = A.size();

    for( int i = 0 ; i < size ; i++){
        int a = abs(A[i]);

        if(a <= size  && A[a-1]>0 )
            A[a-1] = -1*A[a-1];
        
    }
    
    for(int i = 0 ; i < size ; i++){

        if(A[i]>0)
            return i+1;
    }
    
    return size+1;
}
