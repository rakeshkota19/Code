void Solution::reverseWords(string &s) {
    
    
    int size = s.size();
    string ans = "";
    string temp;

    
    for( int i = size-1 ; i >= 0 ; i-- ){
        
        if(s[i] != ' ')
            temp +=s[i];
        else{
            reverse(temp.begin(), temp.end());
            if( ans.size() > 0) ans = ans +" "+temp;
            else ans = temp;
            temp = "";

        }
    }

    if(temp.size() > 0){
        reverse(temp.begin(), temp.end());
        if( ans.size() > 0) ans = ans +" "+temp;
        else ans = temp;
        
    }

   s = ans;

}