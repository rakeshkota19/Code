vector<vector<int>>ans;

void find(vector<int>A, int x){
    
    if(A.size() == x)
        {

            ans.push_back(A);
            return;
        }
    
    int size = A.size();

    find(A,x+1);
    int a = A[x];
    for(int i = x+1 ; i < size ; i++){
        int temp = A[x];
        A[x] = A[i];
        A[i] = temp;
        find(A,x+1);
        
        A[i] = A[x];
        A[x] = temp;
    }
    
    return;
}


vector<vector<int> > Solution::permute(vector<int> &A) {
    ans.clear();
    sort(A.begin(), A.end());
    int size = A.size();
    
    find(A,0);
    return ans;
}
