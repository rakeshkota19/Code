vector<int> Solution::maxone(vector<int> &A, int B) {
    int size = A.size();
    
    int count = 0, s_count = 0,m = B, max_count = INT_MIN, max_index,j=0,index = 0, flag = 0;
    
    for(int i = 0 ; i < size ; i++){
        
        if(A[i] == 1)
        {
            count++;
           // cout<<i<<endl;
            if(flag == 0){
                index = i;
                flag = 1;
               // cout<<j<<i<<endl;
            }
        }
       // cout<<count<<endl;
       //cout<<"h"<<i<<endl;
        if(A[i] == 0) {
            
            if(m == 0 && m!=B){
               // cout<<i<<j<<endl;
             if( max_count < count) 
                { 
                    max_count = count;
                    max_index = index;
                }
            m = B;
            i = j;
            flag = 0;
            count = 0;
            }
            else if(m == B){
                
               /*
                */
                if(B == 0){
                     if( max_count < count) 
                    { 
                         max_count = count;
                         max_index = index;
                    }
                    count = 0; 
                    flag = 0;
                    j = i;
                    continue;
                }
                
                 if(flag == 0)
                    {
                        index = i;
                        flag = 1;
                    }
                j = i;
                count++;
                m--;
            }
            else{
                count++;
                m--;
            }
        }
    }
    
    if(count > max_count)
       {
           max_count = count;
           max_index = index;
       }
   // cout<<max_count<<max_index<<endl;
    vector<int>ans;
    int temp = 0;
    while(temp < max_count){
        ans.push_back(max_index+temp);
        temp++;
    }

    return ans;
}

