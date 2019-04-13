void Solution::sortColors(vector<int> &A) {

    int count_0 =0, count_1 = 0, count_2 = 0;
    int size = A.size();
    
    for(int i =0 ; i < size ; i++){
        if(A[i] == 0) count_0++;
        if(A[i] == 1) count_1++;
        if(A[i] == 2) count_2++;
    }
    
    for(int i = 0 ; i < size ; i++){
        
        if(count_0 > 0){
            A[i] = 0;
            count_0--;
        }else if(count_1 > 0){
            A[i] = 1;
            count_1--;
        }else{
            A[i] = 2;
            count_2--;
        }
    }
    
}
