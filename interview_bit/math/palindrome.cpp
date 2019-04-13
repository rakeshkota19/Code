int Solution::isPalindrome(int A) {
    string s;
    if(A<0) 
        return 0;

    while(A!=0){
        
        //if(A%10<0) s+=to_string(-1*(A%10));
        s+= to_string(A%10);
        A = A/10;
        //if(A<0)
          //  A = -1*A; // cout<<"gg"<<A<<endl;
    }
    //cout<<s<<endl;
    
    int j = s.size()-1;
    for( int i = 0 ; i <= j ; i++){
        
        if(s[i] == s[j])
            {
                if(i == j)
                    return 1;
                
                j--;
            }
        else
            return 0;
    }
    
    return 1;
}
