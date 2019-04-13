int Solution::titleToNumber(string A) {
    int size = A.size();
    int sum = 0;

    for(int i = 0 ; i < size ; i++){
        int a = A[i]-'A';
        
        //cout<<a<<endl;
        sum = sum*26 + (a+1);
    }
    
    return sum;
}
