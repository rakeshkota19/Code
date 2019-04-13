vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    
    int a_size = A.size(), b_size = B.size();
    int i = 0, j = 0;
    vector<int>ans;

    while(i<a_size && j<b_size) {
        
        if(A[i] == B[j]){
            ans.push_back(A[i]);
            i++; j++;
        }
        
        else{
            
            if(A[i] < B[j])
                i++;
            
            if(A[i] > B[j])
                j++;
        }
    }
    
    return ans;
}
