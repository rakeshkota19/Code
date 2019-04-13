nt Solution::lengthOfLastWord(const string A) {
    int size = A.size();
    string ans = "";
    
    for(int i = size - 1 ; i >= 0 ; i--){
        //cout<<i<<endl;
        if(A[i] == ' ' && ans.size() > 0)
            return ans.size();
        
        if(A[i] != ' ')
            ans+=A[i];
 
    }
 
    return ans.size();
}