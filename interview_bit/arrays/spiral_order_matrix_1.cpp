vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    int i = 0, j = 0;
    int n = A.size(), m = A[0].size();
    int t = 0, b = n-1, l = 0, r = m-1;

    vector<int>ans;
    int step = 0;

    while(t<=b && l<=r){
        if(step == 0) {
            for(int i = l; i <= r ; i++)
                ans.push_back(A[t][i]);
            t++; 
            }
        else if(step == 1){
            for(int i = t ; i <= b ; i++)
                ans.push_back(A[i][r]);
            r--;
        }
        else if(step == 2){
            for(int i = r; i>=l; i--)
                {ans.push_back(A[b][i]); cout<<"hi "<<A[i][b]<<" "<<i<<b<<" ";}
            b--;
        }
        else{
            for(int i = b; i>=t; i--)
                ans.push_back(A[l][i]);
            l++;
        }

        step = (step+1)%4;
    }
    return ans;
}
