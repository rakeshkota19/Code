void Solution::merge(vector<int> &A, vector<int> &B) {
    int size_1 = A.size(), size_2 = B.size();

    vector<int>C(A.begin(), A.end());
    A.clear();
    
    int i = 0, j = 0;
    
    while( i < size_1 && j < size_2){
        
        if(C[i] >= B[j])
            {   
                A.push_back(B[j]);
                j++;
            }
        else{
            A.push_back(C[i]);
            i++;
            
        }
    }
    
    while(i < size_1){
        A.push_back(C[i]);
        i++;
    }
    
    while(j < size_2){
        A.push_back(B[j]);
        j++;
    }
    
    
}
