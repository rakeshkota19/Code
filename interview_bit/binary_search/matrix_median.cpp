int Solution::findMedian(vector<vector<int> > &A) {
    int l=INT_MAX,h=INT_MIN,m;
    int r=A.size(); int c=A[0].size();
    
    for(int i=0 ; i<r ; i++){  
        l=min(l,A[i][0]);
        h=max(h,A[i][c-1]); 
    }

    while(l<=h)
    {
        m=(l+h)/2; 
        int high_count = 0, low_count = 0;
        
        for (int i = 0; i < r;i++)
            high_count = high_count + upper_bound(A[i].begin(), A[i].end(), m)-A[i].begin();

        int value = (r*c+1)/2;
        cout<<m<<low_count<<high_count<<value<<endl;

        if(low_count < value && high_count >= value) 
            { return m; }
        else if(high_count <= value)        
            l = m + 1;
        else
            h = m - 1;
    }
    return m;
    
}
