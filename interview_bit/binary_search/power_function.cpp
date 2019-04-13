int Solution::pow(int x, int n, int d) {
   //cout<<x<<n<<d<<endl;

   if(n == 0 && x!=0) 
        return 1;
    
    if(n==0)
        return 0;
    
    if(n == 1)
        return (x+d)%d;
    
    long long int val;

    if( n%2 == 0 )
    {
     val = pow(x, n/2, d);
     //cout<<val<<"FF"<<endl;

     val = (val * val)%d;
     //if(val < 0)    val+=d;

     return (int)(val % d);
    }
    else{
        val = pow(x, (n - 1)/2, d);
        val = (val * val)%d;
        val = ( x * val)%d;

        //if(val < 0) val+=d;

        return (int)(val % d);
    }
}
