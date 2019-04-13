int Solution::isPalindrome(string s) {
    int size = s.size();
    int i = 0, j = size - 1;
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    while(i < j){
        
        if( !(s[i]>='a' && s[i]<='z') && !( s[i]>='A' && s[i]<='Z' ))
           {  i++; continue;}

        if( !(s[j]>='a' && s[j]<='z') && !( s[j]>='A' && s[j]<='Z' ))
            {  j--; continue; }

        if(s[i] == s[j]){
            i++; j--;
            
        }
        else
            return 0;
        
    }
    return 1;
}
