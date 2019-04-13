vector<vector<int>> ans;
map<vector<int>,int>m;
int n, sum;

void find(vector<int>A, int i, vector<int>temp, int total ){
    
    if(total == 0)
        {
            if(temp.size() == 0)
                return;
            
            sort(temp.begin(), temp.end());
            if(m.find(temp) == m.end())
            {
                ans.push_back(temp);
                m[temp] = 1;
            }
            return;
        }
    
    
    if(total < 0)
        return;
    if(i == n)
        return;
    
    temp.push_back(A[i]);
    find(A, i, temp, total - A[i]);
    temp.pop_back();
    
    find(A, i+1, temp, total);
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    
    n = A.size();
    sum = B;
    ans.clear();
    m.clear();
    vector<int>temp;

    find(A, 0, temp, sum);
    sort(ans.begin(), ans.end());
    return ans;
    
}
