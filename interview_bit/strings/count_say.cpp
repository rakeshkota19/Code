string Solution::countAndSay(int A) {
    
    if(A == 1) 
        return "1";
    
    string prev = "1";
    string next = "";
    
    while(A>1) {
        cout<<prev<<endl;
        next =  "";
        int size  = prev.size();
        int count = 1, flag = 0;
        
        for(int i = 1 ; i < size ; i++){
            flag = 1;
            if(prev[i] == prev[i-1])
                count++;
            else{
                next = next + to_string(count)+prev[i-1];
                count = 1;
            }
            
         if(i == size - 1)
                next = next + to_string(count) + prev[i];
            
        }


        if(flag == 0)
            next = next + to_string(count) + prev[0];
        A--;
        prev = next;
    }
    return next;
}
