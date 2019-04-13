vector<vector<int> > Solution::threeSum(vector<int> &A) {
    int size = A.size();
    sort(A.begin(), A.end());
    
    vector<vector<int> > ans;

    for(int i = 0 ; i < size ; i++){
        
        int j = i+1;
        int k = size - 1;
        
        

        while( j < k){
            vector<int>temp;
            if(A[i] + A[j] + A[k] == 0)
                {
                    temp.push_back(A[i]);
                    temp.push_back(A[j]);
                    temp.push_back(A[k]);
                    ans.push_back(temp);
                    j++;
                    k--;
                }
            else if(A[i] + A[j] + A[k] > 0)
                k--;
            else
                j++;
        }
    }
    
    return ans;
}
