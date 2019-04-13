int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int size = A.size();
    int ans = 0;

    for(int i = 0 ; i < size-1 ; i++)
        ans += max(abs(A[i+1]-A[i]),abs(B[i+1]-B[i]));

    return ans;
}
