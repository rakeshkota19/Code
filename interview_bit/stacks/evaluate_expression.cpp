int Solution::evalRPN(vector<string> &A) {
    
    int size = A.size();
    stack<int>st;

    for(int i = 0 ; i < size ; i++){

        string s = A[i];
        
        int string_size = s.size(), number = 0;
        int flag = 0;

        if(s == "+" || s == "-" || s == "*" || s == "/")
            {
                if(!st.empty()){
                    int a = st.top();
                    st.pop();
                    int b = st.top();
                    st.pop();
                    int c;
                  //  cout<<a<<b<<endl;
                    if(s == "+" )
                        c = b+a;
                    else if( s == "-")
                        c = b - a;
                    else if ( s == "*")
                        c = b * a;
                    else
                        c = b / a;
                    
                    st.push(c);
                    continue;
                }
            }
        for(int j = 0 ; j < string_size ; j++){

            if(s[j] == '-') { flag = 1; continue; }
            number = number*10 + ( s[j] - '0' );
        }

        if(flag == 1)
            number = -1 * number;
        
        st.push(number);
    }
    
    return st.top();
}
