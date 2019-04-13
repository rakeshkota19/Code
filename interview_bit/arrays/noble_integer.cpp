int Solution::solve(vector<int> &A) {
    
    sort(A.begin(), A.end());

    int size = A.size();
    int count = 0;
    int k = 0;

    for(int i = size-1 ; i >= 0 ; i--){
    

        if(A[i]==A[i+1] && i!=size-1){
            count++;
            continue;
        }

        if(count == A[i]){//cout<<A[i]<<endl;
            return 1;
        }
        
        count++;

    }
    return -1;
}
