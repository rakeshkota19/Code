vector<int> Solution::primesum(int A) {
    vector<bool> prime(A,true);
    prime[0] = 0;
    prime[1] = 0;
    vector<int>ans;

    for(int i = 2; i*i<=A; i++){
        if(prime[i]){
            for(int j = i+i ; j <= A; j+=i)
                prime[j] = 0;
        }
    }
    
    for(int i = 2; i*i<= A; i++){
        if(prime[i]){
            if(prime[A-i])
                {
                    ans.push_back(i);
                    ans.push_back(A-i);
                    return ans;
                }
        }
    }
}
