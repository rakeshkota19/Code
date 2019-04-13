vector<char>values[10];

void setValue(){
    
    int count = 0;
    
    values[0].push_back('0');
    values[1].push_back('1');

    for(int i = 0 ; i < 10 ; i++){
    
        values[i+2].push_back(count + 'a');

        count++;

        values[i+2].push_back(count + 'a');
        count++;
        values[i+2].push_back(count + 'a');
        
        if(i == 5 || i == 7){
            count++;
            values[i+2].push_back(count + 'a');
        }
        count++;
        
       // cout<<values[i][0]<<values[i][1]<<values[i][2]<<endl;
    }
}

vector<string>ans;
int n;

void find(string A, string temp, int i){

    if( i == n)
    {
        ans.push_back(temp);
        return;
    }

    

    int j = 0;
    int index = A[i]-48;

    while( j < values[index].size()){
        
        char e = values[index][j];
       // cout<<e<<endl;
        temp.push_back(e);
        
        find(A, temp, i+1);
        
        temp.pop_back();
        j++;
    }
    
    
}

vector<string> Solution::letterCombinations(string A) {
    
    ans.clear();
    for(int i = 0 ; i < 10; i++)
        values[i].clear();

//    values.clear();
    n = A.size();
    setValue();
    
    string temp;

    find(A,temp, 0);
    
    sort(ans.begin(), ans.end());

    return ans;
}
