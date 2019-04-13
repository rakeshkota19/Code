int Solution::maximumGap(const vector<int> &A) {

    int size = A.size();
    vector<pair<int,int> >pairs;
    
    for(int i = 0 ; i < size ; i++)
        pairs.push_back(make_pair(A[i],i));
    
    pair<int,int>p;

    sort(pairs.begin(), pairs.end());
    int max_index = INT_MIN,max_diff = INT_MIN;
    
    p = pairs[size-1];
    max_index = p.second;

    for(int i = size-2; i >= 0 ; i--){
        
        p = pairs[i];
        if(p.second < max_index){
            int a = max_index-p.second;

            if(a>max_diff) 
                max_diff = a;
        }
        else
            max_index = max(p.second, max_index);
    }
    
    if(max_diff == INT_MIN)
        return 0;
    
    return max_diff;
}
