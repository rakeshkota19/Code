class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int size = arr.size();
        if(size == 0)
            return 0;
        
        int max_profit=0, min_value = arr[0], profit = 0;
        
        for(int i = 0 ; i < size ; i++) {
            
            if(arr[i] - min_value > max_profit) {
                max_profit = arr[i] - min_value;
            }
            
            min_value = min(min_value, arr[i]);
        }
        
        return max_profit;
    }
};