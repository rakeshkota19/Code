vector<int> Solution::prevSmaller(vector<int> &A) {
    int size = A.size();
    
    stack<int>s;
    vector<int>ans;
    
    if(size == 0) return ans;
    ans.push_back(-1);
    s.push(0);

    int min = -1;

    for(int i = 1 ; i < size ; i++){
        
        while( !s.empty() && A[i] < A[s.top()] ){
            s.pop();
        }
        
        if(!s.empty())
            ans.push_back(A[s.top()]);
        else
            ans.push_back(-1);

        s.push(i);
    }
    
    return ans;
}
