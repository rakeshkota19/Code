typedef long long int ll;

int Solution::paint(int A, int B, vector<int> &C) {
    
    ll size = C.size(),sum = 0 , max = INT_MIN;
    
    for( int  i = 0 ; i < size ; i++)
        {

            sum += C[i];

            if(max < C[i])
                max = C[i];
        }
        
    ll low = max*B, high = sum*B;
    //cout<<low<<high<<endl;
    ll ans = INT_MAX;

    while( low <= high){
        ll mid = (low + high)/2;
        //cout<<mid<<endl;
        ll i = 0, s = 0, k = A-1;

        while( i < size){
            s += (ll)C[i]*B;
           // cout<<s<<endl;
            if(s > mid){
                k--;
                s = C[i]*B;
            }
            i++;
        }
        //cout<<k<<endl;
        if(k >= 0){

            if(ans > ( mid%10000003 ) ){
                ans = mid%10000003;
            }
            high = mid - 1;
        }
        else 
            low = mid + 1;
    }
    
    return (int)ans;
}
