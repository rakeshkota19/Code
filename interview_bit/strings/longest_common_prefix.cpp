string Solution::longestCommonPrefix(vector<string> &A) {
    
    sort(A.begin(), A.end());
    
    int size = A.size();
    
    string prefix = A[0];
    
    for( int i = 1; i < size ; i++){
        
        string b = A[i];

        int size_1 = prefix.size(), size_2 = b.size();
        int  j = 0;
        
        while(j < size_1 && j<size_2){

            if(b[j] != prefix[j])
                break;
            j++;
        }

        prefix.erase(j);
        //cout<<prefix<<endl;
    }
    
    return prefix;
}
