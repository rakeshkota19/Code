bool check(vector<vector<char>> A , int i, int j){

    for(int k = 0 ; k < 9 ; k++){
        
        if(A[i][k] == A[i][j] && j != k)
            return false;
        
        if(A[k][j] == A[i][j] && i != k )
            return false;
    }
    
    int a = (i/3)*3;
    int b = (j/3)*3;

    for( int k = a; k < a+3 ; k++){
        for(int l = b ; l < b+3 ; l++){
            
            if( A[k][l] == A[i][j] &&( k != i && l != j))
                return false;
        }
    }

    return true;
}
bool track(vector<vector<char> > &A, int i, int j){
    
    if(i == 9)
        return true;
    
    if(j == 9)
    {
        i++; j = 0;
        
        if(track(A,i,j))
            return true;
    }

    if(A[i][j] != '.'){
        
        if(!check(A,i,j))
            return false;
        
        if(track(A,i,j+1))
            return true;
        return false;
    }
    for( int k = 0 ; k < 9 ; k++){
        A[i][j] = k+49;
        if(check(A, i, j) && track(A,i,j+1))
            return true;
    }
    A[i][j] = '.';
    return false;

}

void Solution::solveSudoku(vector<vector<char> > &A) {
 track(A,0,0);
}
