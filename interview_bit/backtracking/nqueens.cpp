int n;

char A[1000][1000];
vector<vector<string >> ans;



bool issafe(char q[1000][1000],int x,int y)
{
    int i,j;
    for(i=0;i<n;i++){    if(i<x && q[i][y]=='Q')   return false;  }
    for(i=0;i<n;i++){ if(i<y && q[x][i]=='Q') return false;}
    i=x-1; j=y-1;
     while(i>=0 && j>=0) { if(q[i][j]=='Q') return false; i--; j--;}
     i=y+1; j=x-1;
      while(i<n && j>=0) { if(q[j][i]=='Q') return false; i++; j--;}
    return true;
}



void find( char A[1000][1000], int x)

{
    if( x == n){
        
        vector<string>temp;
        
        for(int i = 0 ; i < n ; i++)
        {
            string s = "";
            for(int j = 0 ; j  < n ; j++)
                {
                    s+=A[i][j];
                }
            temp.push_back(s);
        }
        
        ans.push_back(temp);
    }
        
    for(int i=0;i<n;i++)
    {    
        if(issafe(A,x,i))
        { 
                A[x][i]='Q'; find(A,x+1); A[x][i]='.';
        }
    }

}

vector<vector<string> > Solution::solveNQueens(int a) {
    
    ans.clear();
    n = a;
    memset(A, '.' , sizeof(A));
    
    find(A,0);
    return ans;
}
