vector<int> Solution::nextGreater(vector<int> &A) {
    
    int size = A.size();
    stack<int>s;
    vector<int>ans;
    
    if(size == 0) 
        return ans;

    ans.push_back(-1);
    s.push(size - 1);
    for( int i = size - 2 ; i >= 0 ; i--){
        
        while(!s.empty() && A[i] > A[s.top()])
            s.pop();
        
        if(!s.empty())
            ans.push_back(A[s.top()]);
        else
            ans.push_back(-1);
        
        s.push(i);
    }
    
    return ans;
}
