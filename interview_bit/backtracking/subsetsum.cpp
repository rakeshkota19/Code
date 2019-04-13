vector<vector<int > > ans;
int size;

void find(vector<int>A, vector<int>temp , int x){
    
    if(x == size){
        ans.push_back(temp);
        return;
    }

    find(A, temp, x+1);
    temp.push_back(A[x]);
    find(A, temp, x+1);
    
    temp.pop_back();
    
   
}


vector<vector<int> > Solution::subsets(vector<int> &A) {
    sort(A.begin(), A.end());

    ans.clear();
    size = A.size();
    
    vector<int>temp;

    find(A, temp, 0);
    
    sort(ans.begin(), ans.end());
    
    return ans;
}
