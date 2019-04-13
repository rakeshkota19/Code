vector<vector<int> >ans;
int n , k;


void find(int i,int j, vector<int>temp){
    
    if(j == k){
        if(temp.size() != 0)
            ans.push_back(temp);
        return;
    }
    
    if(j > k || i>=n)
        return;
        
    temp.push_back(i+1);
    find(i+1,j+1, temp);
    
    temp.pop_back();
    
    find(i+1, j, temp);
}

vector<vector<int> > Solution::combine(int A, int B) {
    
    ans.clear();
    n = A, k = B;

    vector<int>temp;
    
    find(0, 0, temp);
    
    return ans;
}
