void Solution::arrange(vector<int> &A) {
    int size = A.size();

    for(int i = 0 ; i < size ; i++){
        int a = A[i]%size;
        A[i] +=(size)*(A[a]%size); 
    }
    
    for(int i = 0 ; i < size ; i++){
        A[i] = A[i]/size;
    }

}

