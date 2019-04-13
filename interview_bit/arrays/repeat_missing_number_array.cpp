typedef long long int ll;

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    ll size = A.size();
    //ll single_sum = (size*(size+1))/2;
    //ll single__sum = (size*(size+1)*(2*size+1))/6;
    ll array_sum = 0;
    ll array__sum = 0;

    for(int i = 0 ; i < size; i++ ){
        array_sum = array_sum + A[i] -(i+1);
        array__sum = array__sum + A[i]*A[i]-(i+1)*(i+1);
    }
    ll bottom_value = array_sum;
    ll top_value = array__sum;
    
    ll di = top_value/bottom_value;

    ll a = (bottom_value+di)/2;
    ll b = (di-a);
    
    vector<int>ans;
    ans.push_back((int)a);
    ans.push_back((int)b);
    
    return ans;
    
}
