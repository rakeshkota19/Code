int Solution::findMin(const vector<int> &arr) {
    int size  = arr.size();
    int first = arr[0];
    
    int low = 0, high = size - 1;
    
    while(low <= high){
        
        int mid = (low+high)/2;
        
        if(mid!=0 && mid!=size-1){
            
            if(arr[mid]<arr[mid-1])
                return arr[mid];
            
            if(arr[mid]> arr[mid-1])
                {
                    if(arr[mid]>first)
                        low = mid+1;
                    if(arr[mid]<first)
                        high = mid-1;
                }
        }
        else
            return min(arr[0],arr[size-1]);
    }
    
}
