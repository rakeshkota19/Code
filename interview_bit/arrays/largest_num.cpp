bool comp(int a, int b){
    if( (to_string(a)+to_string(b)) >= (to_string(b)+to_string(a)) )
        return true;
    return false;
}

string Solution::largestNumber(const vector<int> &A) {
    vector<int>B(A.begin(), A.end());
    sort(B.begin(), B.end(), comp);
    string s = "";

    for(int i = 0 ; i < B.size() ; i++){
        s+=to_string(B[i]);
    }
    return s;
    
}
