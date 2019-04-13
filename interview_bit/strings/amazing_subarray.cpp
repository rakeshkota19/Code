int Solution::solve(string s) {
    int ans = 0;
    int size = s.size();
    
    for( int i = 0 ; i < size ; i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u' || s[i]=='A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            ans = (ans + (size-i))%10003;
    }
    
    return ans;
    
}
